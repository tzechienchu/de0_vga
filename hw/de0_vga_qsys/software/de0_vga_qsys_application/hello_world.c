/*!
 *	\file demo.c
 *
 *	\date		File created: Feb 15, 2012
 *	\author		darius
 *
 *	\version	alpha
 */

#include <stdio.h>

#include "vga_driver.h"
#include "system.h"
#include "io.h"


int main ()
{
	uint16 x, y, color;
	uint64 *frame_buffer;

	IOWR (VGA_0_BASE, VGA_REG_CTRL, 0);							// deassert GO-Bit

	// Try to allocate as many segments as required for the frame buffer.
	if ((frame_buffer = (uint64 *) malloc (((DISPLAY_NUM_COLUMNS * DISPLAY_NUM_ROWS) / 5) * sizeof (uint64))) == NULL)
	{																			// if allocating the frame buffer failed
		printf ("FATAL: Could not allocate memory for the frame buffer\n");		// print error
		return -1;																// and return
	}
	printf ("Frame buffer allocated at base address %#lx\n", (uint32) frame_buffer);

	IOWR (VGA_0_BASE, VGA_REG_FB_BASE_ADDR, (uint32) frame_buffer);		// write frame buffer base address into control register
	printf ("Base address written into control register\n");

	color = 0xFFF;
	for (x = 0; x < DISPLAY_NUM_COLUMNS; x++)
		for (y = 0; y < DISPLAY_NUM_ROWS; y++)
		{
			if (x <= 213)
				color = 0xF00;
			else if (x > 213 && x <= 426)
				color = 0x0F0;
			else
				color = 0x00F;
			frame_px_w (frame_buffer, x, y, color);
		}

	printf ("Count sequence pixel pattern written\n");

	IOWR (VGA_0_BASE, VGA_REG_CTRL, 1);							// write GO-Bit into control register
	printf ("VGA startet\n");

	return 0;
}
