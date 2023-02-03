/*
 * COOLING_SYSTEM.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Mohammed Khaled,Youssef Khaled,Samir tarek,Mohammed el moez
 */

#include "COOLING_SYSTEM.h"

void cooling_system_enable()
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN3, DIO_PIN_OUTPUT);
	DIO_SetPinVal(DIO_PORTC,DIO_PIN3, DIO_PIN_HIGH);
}

void cooling_system_disable()
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN3, DIO_PIN_OUTPUT);
    DIO_SetPinVal(DIO_PORTC,DIO_PIN3, DIO_PIN_LOW);
}



