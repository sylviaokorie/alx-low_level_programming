#include "main.h"

/**
 * leet - function that encodes using rot13
 *@s: string length
 * Return: Always 0
 *
 */
char *leet(char *s)
{
	char a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char p[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				(s[i] = p[j]);
			}
		}
	}
	return (s);
}

