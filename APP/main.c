/*
 * main.c
 *
 *  Created on: Sep 29, 2020
 *      Author: Omar Fahmy
 */

/* HAL LAYER */
#include "../HAL/Buzzer/Buzzer_Interface.h"

#include <util/delay.h>

int main (void)
{
	Buzzer_U8Init();

	while (1)
	{
		Buzzer_U8On();
		_delay_ms(1000);
		Buzzer_U8On();
		_delay_ms(1000);
	}
}
