#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	int i;

	unsigned long int next;

	printf("%lu, ", num1);

	for (i = 0; i < 50; i++)
	{
		printf("%lu, ", num2);
		next = num1 + num2;

		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
