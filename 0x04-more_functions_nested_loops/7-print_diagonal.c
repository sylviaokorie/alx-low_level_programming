#include "main.h"

/**
 * print_diagonal - print diagonal line
 *@n: integer value
 * Return: 0
 *
 */
void print_diagonal(int n)
{
	int t;
	int j;

	for (t = 0; t < n; t++)
	{
		for(j = 0; j < t; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (t < (n-1))
		{
			_putchar('\n')
		}
	}
	_putchar('\n');
}
