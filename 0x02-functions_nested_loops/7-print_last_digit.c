#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @i: function parameter
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;

	if (i < 0)
	{
		k = -k;
	}
	_putchar('0' + k);
	return (k);
}
