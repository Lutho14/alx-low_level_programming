#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints a string
 * @name: char string
 * @f: function pointer taking arguments from string
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
