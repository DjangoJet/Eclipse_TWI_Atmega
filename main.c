/*
 * main.c
 *
 *  Created on: 1 lis 2018
 *      Author: Mike
 */

#include "TWI.h"


int main(void)
{
	uint8_t data;
	TWI_Start();
	TWI_Write(0b11010111);
	TWI_Write(0b0101000);
	TWI_Start();
	TWI_Write(0b11010110);
	data = TWI_Read(0);
	TWI_Stop();

	return 0;
}
