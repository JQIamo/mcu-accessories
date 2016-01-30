/*
   Teensy_FrequencyShield_2ch.h  - Pin mappings for Teensy_FrequencyShield_2ch
   
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

#define DDS1_RESET 		3
#define DDS1_CS 		4
#define DDS1_PS0 		5
#define DDS1_IOUPDATE 	6

#define DDS2_RESET 		8
#define DDS2_CS 		9
#define DDS2_PS0 		10
#define DDS2_IOUPDATE 	7

//! @}

/*! \name Pins for PLL-type objects
 
 Use PLL1_MUX_D for digital inputs, and PLL1_MUX for analog inputs.
 
 */
//! @{
//#define PLL1_MUX		0
#define PLL1_MUX_D		0
#define PLL1_LE			2

//#define PLL2_MUX		A4
#define PLL2_MUX_D		24
#define PLL2_LE			1

//!@}

/*! \name Pins for LCD & Switches/encoders
 *
 */
//! @{

#define LCD_RST			17
#define LCD_RS			16
#define LCD_CSB			15

#define ENC_A2			21
#define ENC_B2			23
#define ENC_SW2			22

#define ENC_A1			14
#define ENC_B1			20
#define ENC_SW1			18

//! @}

/*! \name Pins for SPI & SetList triggering
 *
 */
//! @{

//#define MOSI			11
#define SETLIST_TRIG	12
//#define CLK				13

//! @}
