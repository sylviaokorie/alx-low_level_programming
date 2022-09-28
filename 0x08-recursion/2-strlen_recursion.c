#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: Always 0
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
