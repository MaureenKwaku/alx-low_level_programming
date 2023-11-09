#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 * @size: parameter to be checked
 * @array: a parameter to be checked
 * @cmp: a parameter to be checked
 * Return: 0 or 1
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
