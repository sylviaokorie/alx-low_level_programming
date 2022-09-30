#include "main.h"

/**
 * _memset - used to fill a block of memory with a value
 * @s: string length
 * @b: character to be used
 * @n: unsigned integer
 * Return: Always 0
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
