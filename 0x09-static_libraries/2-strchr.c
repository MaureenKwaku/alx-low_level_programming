#include "main.h"
/**
 * _strchr - funtion to locate a character in a string
 * @s: parameter to be checked
 * @c: parameter to be checked
 * Return: c
 * **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
