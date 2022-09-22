#include "main.h"

/**
 * cap_string - capitalize every first letter of every word
 * @s: length value
 * Return: Always 0
 *
 */
char *cap_string(char *s)
{
	char b[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		for (c = 0; c < 13; c++)
		{
			if (s[i] == b[c])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
