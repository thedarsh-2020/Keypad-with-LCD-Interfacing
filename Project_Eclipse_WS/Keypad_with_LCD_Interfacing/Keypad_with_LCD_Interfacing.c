/******************************************************************************
 *
 * Module: Keypad with LCD Interfacing
 *
 * Description: Source file for Keypad with LCD Interfacing
 *
 *******************************************************************************/

#include "Keypad_with_LCD_Interfacing.h"



/*
 * Description:
 * Initialization of LCD
 */
void Keypad_LCD_init(void)
{
	LCD_init();		/* Initialize the LCD */

	/*
	 * print (Keypad with) on 1st row, begin from column 3
	 */
	LCD_displayStringRowColumn(0,3,"Keypad with");

	/*
	 * print (LCD Interface) on 2nd row, begin from column 2
	 */
	LCD_displayStringRowColumn(1,2,"LCD Interface");

	/*
	 * move cursor to 3rd row and begin from column 0
	 */
	lcd_count_col = 0;
	lcd_count_row = 2;
}


/*
 * Description:
 * Counting cursor position
 */
void Char_Postioin(void)
{
	/*
	 * check if 3rd row is full of characters, so go to next row
	 */
	if((lcd_count_col == 16) && (lcd_count_row == 2))
	{
		lcd_count_row = 3;
		lcd_count_col = 0;
	}

	/*
	 * check if last row is full of characters, so back to begin from 3rd row, column 0
	 */
	else if((lcd_count_col == 16) && (lcd_count_row == 3))
	{
		LCD_clearScreen();
		LCD_displayStringRowColumn(0,3,"Keypad with");
		LCD_displayStringRowColumn(1,2,"LCD Interface");
		lcd_count_row = 2;
		lcd_count_col = 0;
	}
}
