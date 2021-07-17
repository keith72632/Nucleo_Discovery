/*
 * byte_arrays.c
 *
 *  Created on: Jul 17, 2021
 *      Author: keith
 */
#include <stdint.h>

void mem_clear(uint8_t *str, int strlen)
{
	while(strlen--)
	{
		*str = 0;
		str--;
	}
}
