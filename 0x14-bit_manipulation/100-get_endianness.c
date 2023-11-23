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

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = get_endianness();

	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
