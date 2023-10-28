#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
**/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void) argc;
		printf("%s\n", argv[i]);
	}
	return (0);
}
