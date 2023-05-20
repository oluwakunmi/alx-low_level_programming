#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 if successfull
 */
int main(void)
{
	char 'a';
	int b;
	long int c;
	long long int d;
	float e;

	size a = sizeof(char);
	size b = sizeof(int);
	size c = sizeof(long int);
	size d = sizeof(long long int);
	size e = sizeof(float);

	printf("Size of a char:%c byte(s) /n", a);
	printf("Size of an int:%d byte(s) /n", b);
	printf("Size of a long int:%i byte(s) /n", c);
	printf("Size of a long long int:%i byte(s) /n", d);
	printf("Size of a float:%f byte(s)  /n", e);

	return (0);
}
