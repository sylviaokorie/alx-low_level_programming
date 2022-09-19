#include "main.h"

/**
 * print_rev - printing in reverse form
 * @s: integer value
 * Return: Always 0
 *
 */
void print_rev(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
