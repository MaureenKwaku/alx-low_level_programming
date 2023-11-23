#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: a parameter to be checked
**/

void print_binary(unsigned long int n)
{
	unsigned long int pattern = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (pattern > 0)
	{
		if ((n & pattern) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		pattern >>= 1;
	}
}
