#include "main.h"

/**
 * swap_int - swaping the integers
 * @a: integers to be used
 * @b: integer to be used
 * Return: Always 0
 *
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}

