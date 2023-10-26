#include "main.h"
/**
 * _puts_recursion - print a string in recursion
 * @s: parameter to be checked
 * Return: 1 or 0
 * **/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
