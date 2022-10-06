#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocation of memory and terminate with 98
 * @b:amount of bytes.
 * Return: pointer to the allocated the memory else Return  98.
 *
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

