#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: pointer to the name to be printed
 * @f: function pointer to call back a funtion
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
