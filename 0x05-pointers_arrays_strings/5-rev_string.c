#include "main.h"
/**
 * rev_string - reverse string
 * @s: integer value
 * Return: ALways 0
 *
 */
void rev_string(char *s)
{
	char z;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		z = s[i];
		s[i] = s[len1];
		s[len1--] = z;
	}
}
