#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **seg;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	seg = malloc(height * sizeof(int *));
	if (seg == NULL)
	{
		free(seg);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		seg[i] = malloc(width * sizeof(int));
		if (seg[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(seg[i]);
			free(seg);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			seg[i][j] = 0;

	return (seg);
}
