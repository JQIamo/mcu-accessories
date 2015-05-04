/*
   Teensy_FrequencyShield.h  - Pin mappings for the Teensy_FrequencyShield
   
   Created by Neal Pisenti, 2015
   JQI - Joint Quantum Institute

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

/*!	\file	Teensy_FrequencyShield.h
 *	\brief	Pin mappings for Teensy_FrequencyShield PCB.
 *	\details Define statements for pin mappings on Teensy frequency shield.
 *          See https://github.com/JQIamo/mcu-accessories for the breakout
 *          shield, and https://www.pjrc.com/teensy/teensy31.html for info
 *			on the Teensy dev board.
 *
 *	\author	Neal Pisenti <npisenti@umd.edu>
 *  \version 0.1
 *	\date	2015-02-28
 */


/*! \name Pins for DDS-type objects
 *
 */
//! @{

#define DDS1_RESET 		0
#define DDS1_CS 		1
#define DDS1_PS0 		2
#define DDS1_IOUPDATE 	3

#define DDS2_RESET 		4
#define DDS2_CS 		5
#define DDS2_PS0 		6
#define DDS2_IOUPDATE 	7

#define DDS3_RESET 		25
#define DDS3_CS 		26
#define DDS3_PS0 		27
#define DDS3_IOUPDATE 	28

#define DDS4_RESET		21
#define DDS4_CS			20
#define DDS4_PS0		19
#define DDS4_IOUPDATE	18

//! @}

/*! \name Pins for PLL-type objects
 *
 */
//! @{
#define PLL1_MUX		A0
#define PLL1_MUX_D		14
#define PLL1_LE			15

#define PLL2_MUX		A2
#define PLL2_MUX_D		16
#define PLL2_LE			17

#define PLL3_MUX		A19
#define PLL3_MUX_D		30
#define PLL3_LE			29

#define PLL4_MUX		A20
#define PLL4_MUX_D		31
#define PLL4_LE			32

//!@}

/*! \name Pins for LCD & Switches/encoders
 *
 */
//! @{

#define LCD_RST			8
#define LCD_RS			9
#define LCD_CSB			10

#define ENC_A			23
#define ENC_B			22
#define ENC_SW			24

#define SW1				33

//! @}

/*! \name Pins for SPI & SetList triggering
 *
 */
//! @{

#define TEENSY_MOSI		11
#define SETLIST_TRIG	12
#define TEENSY_CLK		13

//! @}
