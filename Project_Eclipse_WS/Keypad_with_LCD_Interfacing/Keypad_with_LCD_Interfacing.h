/******************************************************************************
 *
 * Module: Keypad with LCD Interfacing
 *
 * Description: Header file for Keypad with LCD Interfacing
 *
 *******************************************************************************/

#ifndef KEYPAD_WITH_LCD_INTERFACING_H_
#define KEYPAD_WITH_LCD_INTERFACING_H_

#include <avr/io.h>
#include <util/delay.h>
#include "keypad.h"
#include "lcd.h"
#include "std_types.h"


/*
 * variables to count position of cursor
 */
uint8 lcd_count_col, lcd_count_row;


/*
 * Description:
 * Initialization of LCD
 */
void Keypad_LCD_init(void);


/*
 * Description:
 * Counting cursor position
 */
void Char_Postioin(void);

#endif /* KEYPAD_WITH_LCD_INTERFACING_H_ */
