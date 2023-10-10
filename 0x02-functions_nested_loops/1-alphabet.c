#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * function to print the alphabets in lower case
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
