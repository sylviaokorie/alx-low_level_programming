#include "main.h"
#include <stdio.h>

/**
 * main - printing all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
