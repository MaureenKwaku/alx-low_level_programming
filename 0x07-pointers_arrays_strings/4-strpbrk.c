#include "main.h"

/**
 * _strpbrk - function to search string for any set f bytes
 * @s: parameter to be checked
 * @accept: parameter to be checked
 * Return: 1 or 0
 * **/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
