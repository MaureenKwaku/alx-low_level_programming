#include "main.h"
/**
 * puts_half - prnt second half of string
 * @str: parameter to be worked on
 * Return - always 0;
**/

void puts_half(char *str)
{
	int i, n;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
