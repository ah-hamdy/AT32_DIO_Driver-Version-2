/*
 * Utilities.h
 *
 *  Created on: May 25, 2017
 *      Author: Ahmed HAmdy
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_

#define  SET_BIT(BYTE,BIT_NUMBER) 			   BYTE |= (1<<BIT_NUMBER)
#define  SET_BYTE(BYTE)			  	       	   BYTE = 0xFF
#define  SET_LOW_NIBBLE(BYTE)		           BYTE |= 0x0F
#define  SET_HIGH_NIBBLE(BYTE)		           BYTE |= 0xF0

#define  CLEAR_BIT(BYTE,BIT_NUMBER)  	       BYTE &= ~(1<<BIT_NUMBER)
#define  CLEAR_BYTE(BYTE)			           BYTE = 0x00
#define  CLEAR_LOW_NIBBLE(BYTE)	  	           BYTE &= 0xF0
#define  CLEAR_HIGH_NIBBLE(BYTE)	           BYTE &= 0x0F

#define  TOGGLE_BIT(BYTE,BIT_NUMBER)	       BYTE ^= (1<<BIT_NUMBER)
#define  TOGGLE_BYTE(BYTE)				       BYTE ^= 0xFF
#define  TOGGLE_LOW_NIBBLE(BYTE)		       BYTE ^= 0x0F
#define  TOGGLE_HIGH_NIBBLE(BYTE)		       BYTE ^= 0xF0

#define  GET_BIT(BYTE,BIT_NUMBER)	           (BYTE & (1<<BIT_NUMBER)) >> (BIT_NUMBER)
#define  GET_BYTE(BYTE)		                   (BYTE & 0xFF)
#define  GET_LOW_NIBBLE(BYTE)	               (BYTE & 0x0F)
#define  GET_HIGH_NIBBLE(BYTE)	               (BYTE & 0xF0)

#define  ASSIGN_BIT(BYTE,BIT_NUMBER,VALUE)     BYTE = (BYTE & (~(1 << BIT_NUMBER))) | (VALUE << BIT_NUMBER)
#define  ASSIGN_BYTE(BYTE,VALUE)               BYTE = VALUE
#define  ASSIGN_LOW_NIBBLE(BYTE,VALUE)	       BYTE = (BYTE & 0xF0) | (VALUE & 0x0F)
#define  ASSIGN_HIGH_NIBBLE(BYTE,VALUE)	       BYTE = (BYTE & 0x0F) | (VALUE << 4)

#define  ROT_RIGHT_BIT(BYTE,BIT_NUMBER)        BYTE = (BYTE >> BIT_NUMBER) | (BYTE << (8-BIT_NUMBER))
#define  ROT_LEFT_BIT(BYTE,BIT_NUMBER)         BYTE = (BYTE << BIT_NUMBER) | (BYTE >> (8-BIT_NUMBER))

#define  BIT_IS_SET(BYTE,BIT_NUMBER)	       (BYTE & (1 << BIT_NUMBER))
#define  BIT_IS_CLEAR(BYTE,BIT_NUMBER)	       (!(BYTE & (1 << BIT_NUMBER)))




#endif /* UTILITIES_H_ */
