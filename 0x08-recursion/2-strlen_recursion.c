#include "main.h"
/**
 * _strlen_recursion - print the lenght of a string
 * @s: parameter to be checked
 * Return: 1 or 0
 * **/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
