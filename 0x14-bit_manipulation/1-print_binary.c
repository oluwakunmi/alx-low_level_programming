#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
	}
}
