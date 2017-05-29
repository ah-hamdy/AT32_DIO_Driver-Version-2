/*
 * DIO_prog.c
 *
 *  Created on: Mar 12, 2017
 *      Author: Ahmed HAmdy
 */


#include "Utilities.h"
#include "Typedef.h"

#include "DIO_Interface.h"
#include "DIO_Private.h"
#include "DIO_Config.h"


void DIO_u8Intialize (void)
{
	/* Set Initial direction */
	DDR_A = DIO_u8PORTA_DIRECTION;
	DDR_B = DIO_u8PORTB_DIRECTION;
	DDR_C = DIO_u8PORTC_DIRECTION;
	DDR_D = DIO_u8PORTD_DIRECTION;
	/* Set Initial Value */
	PORT_A = DIO_u8PORTA_VALUE;
	PORT_B = DIO_u8PORTB_VALUE;
	PORT_C = DIO_u8PORTC_VALUE;
	PORT_D = DIO_u8PORTD_VALUE;
}

u8 DIO_u8SetPinDirection (u8 Copy_u8PinNumber,u8 Copy_u8PinDirection)
{
	u8 Local_u8PortIndex,Local_u8PinIndex,Local_u8ReturnStatus;
	Local_u8PortIndex = Copy_u8PinNumber / DIO_u8NumPinsPerPort;
	Local_u8PinIndex = Copy_u8PinNumber % DIO_u8NumPinsPerPort;
	if (Copy_u8PinNumber < DIO_u8TotalNumberOfPins)
	{
		switch (Local_u8PortIndex)
		{
		case DIO_u8PORT_A:
			if (DIO_u8OUTPUT == Copy_u8PinDirection)
			{
				SET_BIT(DDR_A,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(DDR_A,Local_u8PinIndex);
			}
			break;
		case DIO_u8PORT_B:
			if (DIO_u8OUTPUT == Copy_u8PinDirection)
			{
				SET_BIT(DDR_B,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(DDR_B,Local_u8PinIndex);
			}
			break;
		case DIO_u8PORT_C:
			if (DIO_u8OUTPUT == Copy_u8PinDirection)
			{
				SET_BIT(DDR_C,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(DDR_C,Local_u8PinIndex);
			}
			break;
		case DIO_u8PORT_D:
			if (DIO_u8OUTPUT == Copy_u8PinDirection)
			{
				SET_BIT(DDR_D,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(DDR_D,Local_u8PinIndex);
			}
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}


u8 DIO_u8SetPinValue (u8 Copy_u8PinNumber,u8 Copy_u8PinValue)
{
	u8 Local_u8PortIndex,Local_u8PinIndex,Local_u8ReturnStatus;
	Local_u8PortIndex = Copy_u8PinNumber / DIO_u8NumPinsPerPort;
	Local_u8PinIndex = Copy_u8PinNumber % DIO_u8NumPinsPerPort;
	if (Copy_u8PinNumber < DIO_u8TotalNumberOfPins)
	{
		switch (Local_u8PortIndex)
		{
		case DIO_u8PORT_A:
			if (DIO_u8HIGH == Copy_u8PinValue)
			{
				SET_BIT(PORT_A,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(PORT_A,Local_u8PinIndex);
			}
			break;
		case DIO_u8PORT_B:
			if (DIO_u8HIGH == Copy_u8PinValue)
			{
				SET_BIT(PORT_B,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(PORT_B,Local_u8PinIndex);
			}
			break;
		case DIO_u8PORT_C:
			if (DIO_u8HIGH == Copy_u8PinValue)
			{
				SET_BIT(PORT_C,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(PORT_C,Local_u8PinIndex);
			}
			break;
		case DIO_u8PORT_D:
			if (DIO_u8HIGH == Copy_u8PinValue)
			{
				SET_BIT(PORT_D,Local_u8PinIndex);
			}
			else
			{
				CLEAR_BIT(PORT_D,Local_u8PinIndex);
			}
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}

u8 DIO_u8GetPinValue (u8 Copy_u8PinNumber,u8* Copy_u8PinValue)
{
	u8 Local_u8PortIndex,Local_u8PinIndex,Local_u8ReturnStatus;
	Local_u8PortIndex = Copy_u8PinNumber / DIO_u8NumPinsPerPort;
	Local_u8PinIndex = Copy_u8PinNumber % DIO_u8NumPinsPerPort;
	if (Copy_u8PinNumber < DIO_u8TotalNumberOfPins)
	{
		switch (Local_u8PortIndex)
		{
		case DIO_u8PORT_A:
			*Copy_u8PinValue = GET_BIT(PIN_A,Local_u8PinIndex);
			break;
		case DIO_u8PORT_B:
			*Copy_u8PinValue = GET_BIT(PIN_B,Local_u8PinIndex);
			break;
		case DIO_u8PORT_C:
			*Copy_u8PinValue = GET_BIT(PIN_C,Local_u8PinIndex);
			break;
		case DIO_u8PORT_D:
			*Copy_u8PinValue = GET_BIT(PIN_D,Local_u8PinIndex);
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}

u8 DIO_u8TogglePinValue (u8 Copy_u8PinNumber)
{
	u8 Local_u8PortIndex,Local_u8PinIndex,Local_u8ReturnStatus;
	Local_u8PortIndex = Copy_u8PinNumber / DIO_u8NumPinsPerPort;
	Local_u8PinIndex = Copy_u8PinNumber % DIO_u8NumPinsPerPort;
	if (Copy_u8PinNumber < DIO_u8TotalNumberOfPins)
	{
		switch (Local_u8PortIndex)
		{
		case DIO_u8PORT_A:
			TOGGLE_BIT(PORT_A,Local_u8PinIndex);
			break;
		case DIO_u8PORT_B:
			TOGGLE_BIT(PORT_B,Local_u8PinIndex);
			break;
		case DIO_u8PORT_C:
			TOGGLE_BIT(PORT_C,Local_u8PinIndex);
			break;
		case DIO_u8PORT_D:
			TOGGLE_BIT(PORT_D,Local_u8PinIndex);
			break;
		default:
			break;
		}

		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}

u8 DIO_u8SetPortDirection (u8 Copy_u8PortNumber,u8 Copy_u8PortDirection)
{
	u8 Local_u8ReturnStatus;
	if (Copy_u8PortNumber < DIO_u8TotalNumberOfPorts)
	{
		switch (Copy_u8PortNumber)
		{
		case DIO_u8PORT_A:
			if (DIO_u8OUTPUT == Copy_u8PortDirection)
			{
				SET_BYTE(DDR_A);
			}
			else
			{
				CLEAR_BYTE(DDR_A);
			}
			break;
		case DIO_u8PORT_B:
			if (DIO_u8OUTPUT == Copy_u8PortDirection)
			{
				SET_BYTE(DDR_B);
			}
			else
			{
				CLEAR_BYTE(DDR_B);
			}
			break;
		case DIO_u8PORT_C:
			if (DIO_u8OUTPUT == Copy_u8PortDirection)
			{
				SET_BYTE(DDR_C);
			}
			else
			{
				CLEAR_BYTE(DDR_C);
			}
			break;
		case DIO_u8PORT_D:
			if (DIO_u8OUTPUT == Copy_u8PortDirection)
			{
				SET_BYTE(DDR_D);
			}
			else
			{
				CLEAR_BYTE(DDR_D);
			}
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}

u8 DIO_u8SetPortValue (u8 Copy_u8PortNumber,u8 Copy_u8PortValue)
{
	u8 Local_u8ReturnStatus;
	if (Copy_u8PortNumber < DIO_u8TotalNumberOfPorts)
	{
		switch (Copy_u8PortNumber)
		{
		case DIO_u8PORT_A:
			if (DIO_u8HIGH == Copy_u8PortValue)
			{
				SET_BYTE(PORT_A);
			}
			else
			{
				CLEAR_BYTE(PORT_A);
			}
			break;
		case DIO_u8PORT_B:
			if (DIO_u8HIGH == Copy_u8PortValue)
			{
				SET_BYTE(PORT_B);
			}
			else
			{
				CLEAR_BYTE(PORT_B);
			}
			break;
		case DIO_u8PORT_C:
			if (DIO_u8OUTPUT == Copy_u8PortValue)
			{
				SET_BYTE(PORT_C);
			}
			else
			{
				CLEAR_BYTE(PORT_C);
			}
			break;
		case DIO_u8PORT_D:
			if (DIO_u8OUTPUT == Copy_u8PortValue)
			{
				SET_BYTE(PORT_D);
			}
			else
			{
				CLEAR_BYTE(PORT_D);
			}
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}

u8 DIO_u8GetPortValue (u8 Copy_u8PortNumber,u8* Copy_u8PortValue)
{
	u8 Local_u8ReturnStatus;
	if (Copy_u8PortNumber < DIO_u8TotalNumberOfPorts)
	{
		switch (Copy_u8PortNumber)
		{
		case DIO_u8PORT_A:
			*Copy_u8PortValue = GET_BYTE(PORT_A);
			break;
		case DIO_u8PORT_B:
			*Copy_u8PortValue = GET_BYTE(PORT_B);
			break;
		case DIO_u8PORT_C:
			*Copy_u8PortValue = GET_BYTE(PORT_C);
			break;
		case DIO_u8PORT_D:
			*Copy_u8PortValue = GET_BYTE(PORT_D);
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}

u8 DIO_u8TogglePortValue (u8 Copy_u8PortNumber)
{
	u8 Local_u8ReturnStatus;
	if (Copy_u8PortNumber < DIO_u8TotalNumberOfPorts)
	{
		switch (Copy_u8PortNumber)
		{
		case DIO_u8PORT_A:
			TOGGLE_BYTE(PORT_A);
			break;
		case DIO_u8PORT_B:
			TOGGLE_BYTE(PORT_B);
			break;
		case DIO_u8PORT_C:
			TOGGLE_BYTE(PORT_C);
			break;
		case DIO_u8PORT_D:
			TOGGLE_BYTE(PORT_D);
			break;
		default:
			break;
		}
		Local_u8ReturnStatus = DIO_u8STATUS_OK;
	}
	else
	{
		Local_u8ReturnStatus = DIO_u8STATUS_NOT_OK;
	}
	return Local_u8ReturnStatus;
}
