#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	unsigned int sign;

	if (index > 64)
		return (-1);
	sign = index;
	for (p = 1; sign > 0; p *= 2, sign--)
		;

	if ((*n >> index) & 1)
		*n -= p;

	return (1);
}
