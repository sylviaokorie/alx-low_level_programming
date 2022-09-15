#include "main.h"

/**
 *print_numbers - print numbers 0 to 9
 *
 * Return: 0
 *
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
