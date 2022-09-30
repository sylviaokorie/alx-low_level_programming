#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplying two integer using argv
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;
	{
		if (argc == 3)
		{
			for (i = 1; i < argc; i++)
			{
				mul *= atoi(argv[i]);
			}
			printf("%d\n", mul);
		}
		else
		{
			printf("Error\n");
		}
	}
	return (1);
}
