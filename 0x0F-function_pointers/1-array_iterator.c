#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @size: a parameter to be checked
 * @array: a parameter to be checked
 * @action: a parameter to be checked
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
