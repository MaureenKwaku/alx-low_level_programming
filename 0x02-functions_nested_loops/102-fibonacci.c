#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int i;

	int next;

	printf("%d, ", num1);

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", num2);
		next = num1 + num2;

		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
