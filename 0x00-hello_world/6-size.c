#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 if successfull
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	size_t size_a = sizeof(a);
	size_t size_b = sizeof(b);
	size_t size_c = sizeof(c);
	size_t size_d = sizeof(d);
	size_t size_e = sizeof(e);

	printf("Size of a char:%zu byte(s)\n", size_a);
	printf("Size of an int:%zu byte(s)\n", size_b);
	printf("Size of a long int:%zu byte(s)\n", size_c);
	printf("Size of a long long int:%zu byte(s)\n", size_d);
	printf("Size of a float:%zu byte(s)\n", size_e);

	return (0);
}
