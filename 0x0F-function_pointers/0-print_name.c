#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - func that print a name
 * @name: string
 * @f: pnt
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
