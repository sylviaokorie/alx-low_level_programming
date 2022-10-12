#include "function_pointers.h"

/**
 * print_name - prints a name as it is
 * @name: name of person or thing
 * @f:function pointer
 * Return: Alway 0
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
