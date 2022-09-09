#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Alway 0 (Success)
 *
 */
int main(void)
{
	char hx;
	char HX;

	for (hx = 48; hx <= 57; ++hx)
	{
		putchar(hx);
	}
	for (HX = 97; HX <= 102; ++HX)
	{
		putchar(HX);
	}
	putchar('\n');
return (0);
}

