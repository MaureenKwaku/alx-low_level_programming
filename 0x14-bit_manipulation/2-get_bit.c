#include "main.h"

/**
 * get_bit - prints out the value of a bit at a given index
 * @n: a parameter to be checked
 * @index: a parameter to be checked
 * Return: returns the value of the bit at the index
**/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
