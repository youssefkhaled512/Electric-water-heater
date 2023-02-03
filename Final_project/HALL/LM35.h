/*
 * LM35.h
 *
 *  Created on: Oct 21, 2022
 *      Author: Mohammed Khaled,Youssef Khaled,Samir tarek,Mohammed el moez
 */

#ifndef LM35_H_
#define LM35_H_

#include "../STD_TYPES.h"
#include "../MCAL/Register_addresses.h"
#include <util/delay.h>

void lm35_Init();

uint8 lm35_Read(uint8 data );

sint32 lm35_average();


#endif /* LM35_H_ */
