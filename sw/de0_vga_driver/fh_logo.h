/*!
 *	\file fh_logo.h
 *
 *	\date		File created: Feb 21, 2012
 *	\author		Darius Kellermann
 *
 *	\version	WS 10/11
 */

#ifndef FH_LOGO_H_
#define FH_LOGO_H_

#include "vga_driver.h"

/*!
 *	\def 	FH_LOGO_WIDTH
 *	\brief	Width in pixels of this graphic.
 */
#define FH_LOGO_WIDTH	12
/*!
 *	\def 	FH_LOGO_HEIGHT
 *	\brief	Height in pixels of this graphic.
 */
#define FH_LOGO_HEIGHT	13

/*!
 *	The actual graphic.
 */
uint16 fh_logo[] = {
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xEEE, 0xEEE, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xAAA, 0x555, 0x444, 0x888, 0xCCC, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xAAA, 0x000, 0x000, 0x000, 0x000, 0x444, 0xCCC, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xCCC, 0x444, 0x000, 0x000, 0x000, 0x000, 0x000, 0x888, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xCCC, 0x222, 0x000, 0x000, 0x000, 0x000, 0x000, 0x555, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xEEE, 0x444, 0x000, 0x000, 0x000, 0x000, 0x222, 0x888, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xAAA, 0x222, 0x000, 0x000, 0x000, 0x555, 0xEEE, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xAAA, 0x444, 0x555, 0x666, 0xCCC, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF,
		0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF, 0xFFF
};

#endif /* FH_LOGO_H_ */
