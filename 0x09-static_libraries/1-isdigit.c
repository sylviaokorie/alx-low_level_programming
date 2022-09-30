#include "main.h"

/**
 * _isdigit - checks for a digit betwwen 0 through 9
 * @c: variable being used
 * Return: 0
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
