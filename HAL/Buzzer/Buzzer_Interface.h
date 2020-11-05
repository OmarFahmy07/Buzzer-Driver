/*
 * Buzzer_Interface.h
 *
 *  Created on: Sep 27, 2020
 *      Author: Omar Fahmy
 */

#ifndef HAL_BUZZER_BUZZER_INTERFACE_H_
#define HAL_BUZZER_BUZZER_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

/************************************************************************************/
/* 								FUNCTIONS PROTOTYPE					 				*/
/************************************************************************************/

/************************************************************************************/
/* Description: initializes buzzer's configurations	  								*/
/* Input      : nothing	 		                                                    */
/* Output     : error checking                                                      */
/************************************************************************************/
extern u8 Buzzer_U8Init(void);
/************************************************************************************/

/************************************************************************************/
/* Description: turns buzzer on						  								*/
/* Input      : nothing	 		                                                    */
/* Output     : error checking                                                      */
/************************************************************************************/
extern u8 Buzzer_U8On(void);
/************************************************************************************/

/************************************************************************************/
/* Description: turns buzzer off						  								*/
/* Input      : nothing	 		                                                    */
/* Output     : error checking                                                      */
/************************************************************************************/
extern u8 Buzzer_U8Off(void);
/************************************************************************************/

#endif /* HAL_BUZZER_BUZZER_INTERFACE_H_ */
