#include "main.h"

/**
 * argstostr - concatenate all arguments of your program
 * @ac: parameter to be checked
 * @av: parameter to be checked
 * Return: 1 or 0
 * **/

char *argstostr(int ac, char **av)
{
	char *aout;
	int a, b, c = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			len++;
		}
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);

	if (aout == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			aout[c] = av[a][b];
			c++;
		}
		if (aout[c] == '\0')
		{
			aout[c++] = '\n';
		}
	}
	return (aout);
}
