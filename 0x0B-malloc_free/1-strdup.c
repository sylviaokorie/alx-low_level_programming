#include "main.h"
#include <stdio.h>

/**
 * _strdup - return pointer to a newly allocated space
 * @str: string
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *dap;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	dap = (char *) malloc(sizeof(char) * (i + 1));
	if (dap == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		dap[j] = str[j];
	}
	return (dap);
}
