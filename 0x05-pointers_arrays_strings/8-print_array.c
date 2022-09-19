#include "main.h"
#include <stdio.h>

/**
 * print_array - printing n element of an array of integer
 * @a: integer value
 * @n: integer value
 * Return: Alway 0
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
