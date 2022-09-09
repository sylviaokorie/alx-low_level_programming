#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 *
 */
int main(void)
{
	char c;
	char D;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (D = 'A'; D <= 'Z'; ++D)
	{
		putchar(D);
	}
	putchar('\n');
return (0);
}
