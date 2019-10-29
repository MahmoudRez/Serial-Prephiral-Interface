/*
 * SPI_App.c
 *
 *  Created on: Mar 10, 2019
 *      Author: alx
 */
#include "STD_TYPES.h"
#include "Utilize.h"
#include "DIO.h"
#include "SPI_Interface.h"
#include "util/delay.h"

void main (void)
{
	uint8 LOC_u8TxData='A';
	uint8 LOC_u8RxData=0;
	DDRD=0xFF;
	SPI_vidInitialize();
	while(1)
	{

		SPI_vidTransfer(LOC_u8TxData,&LOC_u8RxData);
		PORTD=LOC_u8RxData;
		_delay_ms(500);
	}
}
