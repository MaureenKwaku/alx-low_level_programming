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
	unsigned long int i;
	unsigned long int next;

	printf("%lu, %lu, ", num1, num2);

	for (i = 1; i < 98; i++)
	{
		next = num1 + num2;
		printf("%lu, ", next);

		num1 = num2;
		num2 = next;
	}
	printf("\n");
		return (0);
}
