/*
 * main.c
 *
 *  Created on: May 27, 2017
 *      Author: Ahmed HAmdy
 */


#include "Utilities.h"
#include "Typedef.h"


#include "DIO_Interface.h"
#include "util/delay.h"
int main (void)
{
	//DIO_u8Intialize();
	DIO_u8SetPinDirection(DIO_u8PIN0,DIO_u8OUTPUT);
	DIO_u8SetPinValue(DIO_u8PIN0,DIO_u8HIGH);
	DIO_u8SetPinDirection(DIO_u8PIN1,DIO_u8OUTPUT);
	DIO_u8SetPinValue(DIO_u8PIN1,DIO_u8HIGH);
	DIO_u8SetPinDirection(DIO_u8PIN3,DIO_u8OUTPUT);
	while (1)
	{
		DIO_u8TogglePinValue(DIO_u8PIN3);
		_delay_ms(1000);
		DIO_u8TogglePinValue(DIO_u8PIN3);
		_delay_ms(1000);
	}



	return 0;
}
