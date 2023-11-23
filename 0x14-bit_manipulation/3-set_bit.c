#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: a parameter to be checked
 * @index: a parameter to be checked
 * Return: returns 1 if it works or 0 if an error occurs
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);

	return (1);
}
