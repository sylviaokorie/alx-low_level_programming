#include "main.h"

/**
 *_islower - function islower shows 1 if the input is a lowercase charater.
 *@c: is the int that will be used for the function
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
