#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: argument count
 * Return: 1 or 0
**/

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);

	if (output == NULL)
	{
		exit(98);
	}
	else
	{
		return (output);
	}
}
