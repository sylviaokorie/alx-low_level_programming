#include "main.h"

/**
 * _memcpy - copying a block of memory from src to dest
 * @dest: destination
 * @src: source
 * @n: unsigned integer
 * Return: Always 0
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
