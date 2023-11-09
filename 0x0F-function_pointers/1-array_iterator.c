#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @size: a parameter to be checked
 * @array: a parameter to be checked
 * @action: a parameter to be checked
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
