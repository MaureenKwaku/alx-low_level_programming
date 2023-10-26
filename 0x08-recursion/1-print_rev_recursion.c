#include "main.h"
/**
 * _print_rev_recursion - print a string in verse
 * @s: parameter to be checked
 * Return: 1 or 0
 * **/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
