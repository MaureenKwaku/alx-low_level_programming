#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: argument count
 * @max: argument vector
 * Return: 1 or 0
**/

int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	a = malloc(sizeof(int) * j);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
