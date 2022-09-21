#include "main.h"

/**
 * string_toupper - function to convert lowercase to uppercase
 * @a: integer value
 * Return: Always 0
 *
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')

		a[i] = a[i] - 32;
	}
return (a);
}
