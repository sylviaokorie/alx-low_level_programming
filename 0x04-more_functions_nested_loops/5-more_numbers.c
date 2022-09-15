#include "main.h"

/**
 * more_numbers - print 0 to 14 10x
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + 48);
			}
			_putchar((m % 10) + 48);
		}
		_putchar('\n');
	}
}
