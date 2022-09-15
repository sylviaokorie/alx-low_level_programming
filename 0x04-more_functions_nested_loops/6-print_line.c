#include "main.h"

/**
 * print_line - print straight line
 *@n: integer value
 * Return: 0
 *
 */
void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
