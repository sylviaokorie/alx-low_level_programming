#include "main.h"

/**
 * _strcmp - comparing strings of char
 * @s1: string variable
 * @s2: another string variable
 * Return: Always 0 or the ASCII difference
 *
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
