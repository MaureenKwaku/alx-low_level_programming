#include "main.h"

/**
 * more_numbers - print the numbers from 1 to 14
 * Return: 1 or 0
**/

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 11)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
