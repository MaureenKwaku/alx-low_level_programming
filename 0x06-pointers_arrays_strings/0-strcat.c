#include "main.h"

/**
 * _strcat - function to be worked on
 * @dest: parameter to be worked on
 * @src: parameter to be worked on
 * Return- always 0
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
	return (dest);
}
