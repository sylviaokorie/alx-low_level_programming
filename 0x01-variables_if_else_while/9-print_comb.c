#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Alway 0 (Success)
 *
 */
int main(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
	if (num != 57)
	{
		putchar(',');
		putchar(' ');
	}
		++num;
	}
return (0);
}
