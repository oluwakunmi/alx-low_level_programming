#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, c;

		for (i = 1; i <= size; i++)
		{
			for (c = i; c < size; c++)
			{
				_putchar(' ');
			}

			for (c = 1; c <= i; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
