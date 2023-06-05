#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int a = 0, b;

	for (; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[a][b]);
		_putchar('\n');
	}
}
