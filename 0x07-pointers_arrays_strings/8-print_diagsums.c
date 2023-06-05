#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @b: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int a = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; a < max; a += size + 1)
		sum1 += b[a];

	for (a = size - 1; a < max - 1; a += size - 1)
		sum2 += b[a];

	printf("%d, %d\n", sum1, sum2);
}
