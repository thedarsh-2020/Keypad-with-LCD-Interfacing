/**************************************************************************************************
 *
 * Author      : Mustafa Muhammad
 *
 * Description : Keypad with LCD Interfacing
 *
 **************************************************************************************************/


#include "Keypad_with_LCD_Interfacing.h"

int main(void)
{
	/*
	 * Description:
	 * Initialization of LCD
	 */
	Keypad_LCD_init();

	/*
	 * Variables Declaration
	 * key : returned character from Keypad
	 */
	uint8 key;

	for(;;)
	{
		key = KEYPAD_getPressedKey();
		switch(key)
		{
		case 0:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(0);
			lcd_count_col++;
			break;
		case 1:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(1);
			lcd_count_col++;
			break;
		case 2:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(2);
			lcd_count_col++;
			break;
		case 3:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(3);
			lcd_count_col++;
			break;
		case 4:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(4);
			lcd_count_col++;
			break;
		case 5:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(5);
			lcd_count_col++;
			break;
		case 6:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(6);
			lcd_count_col++;
			break;
		case 7:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(7);
			lcd_count_col++;
			break;
		case 8:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(8);
			lcd_count_col++;
			break;
		case 9:
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_intgerToString(9);
			lcd_count_col++;
			break;
		case '*':
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_displayCharacter('*');
			lcd_count_col++;
			break;
		case '#':
			Char_Postioin();
			LCD_moveCursor(lcd_count_row, lcd_count_col);
			LCD_displayCharacter('#');
			lcd_count_col++;
			break;
		}

		/*
		 * Delay to wait before take next character
		 */
		_delay_ms(500);
	}
}
