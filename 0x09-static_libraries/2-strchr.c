#include "main.h"

/**
 * _strchr - searches for the occurrence of char and returns the s
 * @s: string
 * @c: character of string
 * Return: Always 0
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
