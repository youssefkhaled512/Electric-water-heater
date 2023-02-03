/*
 * HEATING_SYSTEM.h
 *
 *  Created on: Oct 17, 2022
 *      Author: Mohammed Khaled,Youssef Khaled,Samir tarek,Mohammed el moez
 */

#include "../STD_TYPES.h"
#include "../Macros.h"
#include "../MCAL/DIO.h"
#include <avr/io.h>
#include <avr/interrupt.h>

#ifndef HALL_HEATING_SYSTEM_H_
#define HALL_HEATING_SYSTEM_H_


void heating_system_enable();
void heating_system_disable();


#endif /* HALL_HEATING_SYSTEM_H_ */
