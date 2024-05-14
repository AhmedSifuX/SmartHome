/*
 * SmartHome.c
 *
 * Created: 14/05/2024 09:35:35 م
 * Author : user
 */ 

#include "STD_TYPES.h"
#include "Error_State.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "KPD_interface.h"
#include "LCD_interface.h"

#define MAX_LENGTH 100


int main(void)
{
	char expression[MAX_LENGTH];
	u8 index = 0;
	
	/*INIT*/
	/*---------------------------*/
	LCD_voidINIT();
	KPD_voidINIT();
	/*---------------------------*/
	/*END INIT*/
	
	
	
	
    /* Replace with your application code */
    while (1) 
    {
		
		u8 pressedkey = KPD_NOT_PRESSED_KEY;
		do
		{
			pressedkey = KPD_GetPressedKey();
		} while (pressedkey == KPD_NOT_PRESSED_KEY);
		LCD_voidSendData(pressedkey);
    }
}

