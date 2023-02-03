/*
 * EEPROM.h
 *
 *  Created on: Oct 22, 2022
 *      Author: Mohammed Khaled,Youssef Khaled,Samir tarek,Mohammed el moez
 */

#ifndef HALL_EEPROM_H_
#define HALL_EEPROM_H_


#include "../MCAL/I2C.h"

void EEPROM_Init();
void EEPROM_WRITE(uint8 EEPROM_ADDRESS,uint8 EEPROM_DATA);
uint8 EEPROM_READ(uint8 EEPROM_ADDRESS);



#endif /* HALL_EEPROM_H_ */
