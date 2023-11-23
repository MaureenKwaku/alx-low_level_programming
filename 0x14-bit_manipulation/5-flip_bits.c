#include "main.h"

/**
 * flip_bits - the number of bits to flip to get from one num to another
 * @n: a parameter to be checked
 * @m: a parameter to be checked
 * Return: returns a number of bits to flip
**/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
