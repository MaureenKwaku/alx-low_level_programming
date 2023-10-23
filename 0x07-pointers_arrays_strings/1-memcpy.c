#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: parameter to be checked
 * @src: parameter to be checked
 * @n: parameter to be checked
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
