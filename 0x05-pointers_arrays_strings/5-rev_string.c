#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The integer to be reversed
 * This programme was written by Ubaydah,
 * on the 24th of june  2023
 * Return: Nothing
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char c;

	while (s[a] != '\0')
		a++;

	while (b < a--)
	{
		c = s[b];
		s[b++] = s[a];
		s[a] = c;
	}
}
