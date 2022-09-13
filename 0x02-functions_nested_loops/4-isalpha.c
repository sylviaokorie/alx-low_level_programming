#include "main.h"

/**
 * _isalpha - show 1 if it is a lowercase or upper case
 * @c: c is a variable
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
