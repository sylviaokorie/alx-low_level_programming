#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to pow
 * @x: integer value
 * @y: value to be raised
 * Return: Always 0
 *
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 2)
	{
		return (x * x);
	}
	else if (y % 2 == 0)
	{
		i = _pow_recursion(x, y / 2);
		return (i * i);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
