#include "function_pointers.h"

/**
 * array_iterator - function given a parameter name
 * @array: input integer array
 * @action: pointer to function
 * @size: size of array.
 *
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
