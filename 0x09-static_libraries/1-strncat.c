#include "main.h"

/**
 * _strncat - function that concatenates two string using n byte
 * @dest: integer pointer
 * @src: integer pointer for source
 * @n: bytes to be used
 * Return: Always 0
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

