#include "main.h"

/**
 * _strcat - cncatenate two strings
 * @dest: parameter to be worked on
 * @src: parameter to be worked on
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int destlenght = 0;
	int srclenght = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlenght++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclenght++;
	}

	for (i = 0; i <= srclenght; i++)
	{
		dest[destlenght] = src[i];
	}
	_putchar('\n');
	return (dest);
}
