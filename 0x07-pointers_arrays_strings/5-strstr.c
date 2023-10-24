#include "main.h"

/**
 * _strstr - function to locate a substring
 * @haystack: parameter to be checked
 * @needle: parameter to be checked
 * Return: 1 or 0
 * **/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
