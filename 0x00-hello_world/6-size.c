#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	double c;
	char d;
	/* sizeof evalutes the size of a variable */
	printf("size of int: %zu bytes\n", sizeof(a));
	printf("size of float: %zu bytes\n", sizeof(b));
	printf("size of double: %zu bytes\n", sizeof(c));
	printf("size of char: %zu byte\n", sizeof(d));
return (0);
}
