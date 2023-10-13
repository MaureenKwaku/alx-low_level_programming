#include "main.h"

/**
 * print_line - print a straight line
 * @n: parameter to be checked
 * Return: 1 or 0
 * **/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
