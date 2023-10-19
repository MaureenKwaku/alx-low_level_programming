#include "main.h"
/**
 * _strncat - cncatenate two strings
 * @dest: parameter to be worked on
 * @src: parameter to be worked on
 * @n: number of bytes
 * Return: dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
