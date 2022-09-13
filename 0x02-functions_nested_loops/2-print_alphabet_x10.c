#include "main.h"

/**
 * print_alphabet_x10 - function print lower case 10 times
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}

