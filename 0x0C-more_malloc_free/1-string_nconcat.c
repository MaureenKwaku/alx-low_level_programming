#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: argument count
 * @s2: argument vector
 * @n: parameter to be checked
 * Return: 1 or 0
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1lenght = 0;
	unsigned int s2lenght = 0;
	char *output;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1lenght++;
	for (i = 0; s2[i] != '\0'; i++)
		s2lenght++;

	output = malloc(sizeof(char) * (s1lenght + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2lenght)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[s1lenght + i] = s2[i];
		output[s1lenght + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			output[i] = s1[i];
		}
		for (i = 0; i < n; i++)
			output[s1lenght + i] = s2[i];
		output[s1lenght + i] = '\0';
	}
	return (output);
}
