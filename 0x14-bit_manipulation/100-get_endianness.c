#include "main.h"

/**
 * get_endianness - a function to check the endianness of the system
 * Return: returns a little endianne or big endianne
**/

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)(*c));
}
