#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: parameter to be checked
 * @f: parameter to be checked
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
