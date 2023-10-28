#include "main.h"

/**
 *_strlen - get the lenght of a string
 *@s: parameter to be worked on
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
