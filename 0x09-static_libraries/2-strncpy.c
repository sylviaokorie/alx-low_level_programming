#include "main.h"

/**
 * _strncpy - function to copy from src to dest
 * @dest: variable destination
 * @src: variable source
 * @n: number of bytes
 * Return: pointer to the resulting string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	b = a;
	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
