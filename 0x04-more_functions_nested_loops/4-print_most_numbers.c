#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * Return: 1 or 0
**/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
