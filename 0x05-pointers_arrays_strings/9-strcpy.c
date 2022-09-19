#include "main.h"

/**
 * _strcpy - write a function that copies the string pointed to by src
 * @dest: integer value
 * @src: integer value
 * Return: Always 0
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
