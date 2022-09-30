#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest.
 * @dest:  destination varialbe
 * @src: source variable
 * Return: Always 0
 *
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
