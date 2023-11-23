#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at a given index
 * @n: a parameter to be checked
 * @index: a parameter to be checked
 * Return: return 1 if it works or -1 if there is an error
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n & (~(1UL << index));

	return (1);
}
