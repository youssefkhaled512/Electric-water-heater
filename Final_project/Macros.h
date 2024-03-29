/*
 * Macros.h
 *
 *  Created on: Oct 13, 2022
 *      Author: Mohammed Khaled,Youssef Khaled,Samir tarek,Mohammed el moez
 */

#ifndef MCAL_MACROS_H_
#define MCAL_MACROS_H_

#define SET_BIT(REG,PIN_NUM) REG|=(1<<PIN_NUM)
#define CLR_BIT(REG,PIN_NUM) REG&=~(1<<PIN_NUM)
#define TOGGLE_BIT(REG,PIN_NUM) REG^=(1<<PIN_NUM)
#define GET_BIT(REG,PIN_NUM) ((REG>>PIN_NUM)&1)


#endif /* MCAL_MACROS_H_ */
