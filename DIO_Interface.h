/*
 * DIO_interface.h
 *
 *  Created on: Mar 12, 2017
 *      Author: Ahmed HAmdy
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/* Comment: Map for all DIO Ports */
#define DIO_u8PORT_A	0
#define DIO_u8PORT_B	1
#define DIO_u8PORT_C	2
#define DIO_u8PORT_D	3

/* Comment: Total Number of DIO Pins */
#define DIO_u8TotalNumberOfPins		32

/* Comment: Total Number of DIO Ports */
#define DIO_u8TotalNumberOfPorts  	4

/* Comment: Number of Pins per Port */
#define DIO_u8NumPinsPerPort		8

/* Comment: DIO Values */
#define    DIO_u8HIGH			1
#define    DIO_u8LOW			0

/* Comment: DIO Directions */
#define    DIO_u8OUTPUT			1
#define    DIO_u8INPUT			0

/* Comment: DIO Return Status Values */
#define    DIO_u8STATUS_OK		1
#define    DIO_u8STATUS_NOT_OK	0

/* Comment: Map for all DIO Pins */
#define    DIO_u8PIN0		0
#define    DIO_u8PIN1		1
#define    DIO_u8PIN2		2
#define    DIO_u8PIN3		3
#define    DIO_u8PIN4		4
#define    DIO_u8PIN5		5
#define    DIO_u8PIN6		6
#define    DIO_u8PIN7		7
#define    DIO_u8PIN8		8
#define    DIO_u8PIN9		9
#define    DIO_u8PIN10		10
#define    DIO_u8PIN11		11
#define    DIO_u8PIN12		12
#define    DIO_u8PIN13		13
#define    DIO_u8PIN14		14
#define    DIO_u8PIN15		15
#define    DIO_u8PIN16		16
#define    DIO_u8PIN17		17
#define    DIO_u8PIN18		18
#define    DIO_u8PIN19		19
#define    DIO_u8PIN20		20
#define    DIO_u8PIN21		21
#define    DIO_u8PIN22		22
#define    DIO_u8PIN23		23
#define    DIO_u8PIN24		24
#define    DIO_u8PIN25		25
#define    DIO_u8PIN26		26
#define    DIO_u8PIN27		27
#define    DIO_u8PIN28		28
#define    DIO_u8PIN29		29
#define    DIO_u8PIN30		30
#define    DIO_u8PIN31		31

/*
 * Function Name:			DIO_u8Intialize
 * Prototype: 				void DIO_u8Intialize (void)
 * Behavior description:	Initialize DIO Component
 * Input parameter:			void
 * Output parameter:		void
 * Required preconditions:	None
 */
void DIO_u8Intialize (void);

/*
 * Function Name:			DIO_u8SetPinDirection
 * Prototype: 				u8 DIO_u8SetPinDirection (u8 Copy_u8PinNumber,u8 Copy_u8PinDirection)
 * Behavior description:	Set Pin Direction
 * Input parameter:			u8 Copy_u8PinNumber,u8 Copy_u8PinDirection
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Initialize DIO Component
 */
u8 DIO_u8SetPinDirection (u8 Copy_u8PinNumber,u8 Copy_u8PinDirection);

/*
 * Function Name:			DIO_u8SetPinValue
 * Prototype: 				u8 DIO_u8SetPinValue (u8 Copy_u8PinNumber,u8 Copy_u8PinValue)
 * Behavior description:	Set Pin Value
 * Input parameter:			u8 Copy_u8PinNumber,u8 Copy_u8PinValue
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Set DIO Pin Direction
 */
u8 DIO_u8SetPinValue (u8 Copy_u8PinNumber,u8 Copy_u8PinValue);

/*
 * Function Name:			DIO_u8GetPinValue
 * Prototype: 				u8 DIO_u8GetPinValue (u8 Copy_u8PinNumber,u8* Copy_u8PinValue)
 * Behavior description:	Get Pin Value
 * Input parameter:			u8 Copy_u8PinNumber,u8* Copy_u8PinValue
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Set DIO Pin Direction
 */
u8 DIO_u8GetPinValue (u8 Copy_u8PinNumber,u8* Copy_u8PinValue);

/*
 * Function Name:			DIO_u8TogglePinValue
 * Prototype: 				u8 DIO_u8TogglePinValue (u8 Copy_u8PinNumber)
 * Behavior description:	Toggle Pin Value
 * Input parameter:			u8 Copy_u8PinNumber
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Set DIO Pin Direction and Set Pin value
 */
u8 DIO_u8TogglePinValue (u8 Copy_u8PinNumber);

/*
 * Function Name:			DIO_u8SetPortDirection
 * Prototype: 				u8 DIO_u8SetPortDirection (u8 Copy_u8PortNumber,u8 Copy_u8PortDirection)
 * Behavior description:	Set Port Direction
 * Input parameter:			u8 Copy_u8PortNumber,u8 Copy_u8PortDirection
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Initialize DIO Component
 */
u8 DIO_u8SetPortDirection (u8 Copy_u8PortNumber,u8 Copy_u8PortDirection);

/*
 * Function Name:			DIO_u8SetPortValue
 * Prototype: 				u8 DIO_u8SetPortValue (u8 Copy_u8PortNumber,u8 Copy_u8PortValue)
 * Behavior description:	Set Port Value
 * Input parameter:			u8 Copy_u8PortNumber,u8 Copy_u8PortValue
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Set Port Direction
 */
u8 DIO_u8SetPortValue (u8 Copy_u8PortNumber,u8 Copy_u8PortValue);

/*
 * Function Name:			DIO_u8GetPortValue
 * Prototype: 				u8 DIO_u8GetPortValue (u8 Copy_u8PortNumber,u8* Copy_u8PortValue)
 * Behavior description:	Get Port Value
 * Input parameter:			u8 Copy_u8PortNumber,u8* Copy_u8PortValue
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Set Port Direction
 */
u8 DIO_u8GetPortValue (u8 Copy_u8PortNumber,u8* Copy_u8PortValue);

/*
 * Function Name:			DIO_u8TogglePortValue
 * Prototype: 				u8 DIO_u8TogglePortValue (u8 Copy_u8PortNumber)
 * Behavior description:	Toggle Port Value
 * Input parameter:			u8 Copy_u8PortNumber
 * Output parameter:		Local_u8ReturnStatus
 * Required preconditions:	Set Port Direction and Set Port Value
 */
u8 DIO_u8TogglePortValue (u8 Copy_u8PortNumber);
#endif /* DIO_INTERFACE_H_ */
