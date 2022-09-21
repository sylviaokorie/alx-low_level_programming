#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: pointer value
 * @n: integer value
 * Return: Always 0
 *
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
