#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int num1 = 1;
	unsigned int num2 = 2;
	unsigned int i;
	unsigned int next;

	printf("%lu,%lu, " num1, num2);
	
	for (i = 0; i < 96; i++)
	{
		printf("%lu, ", next);
		next = num1 + num2;

		num1 = num2;
		num2 = next;
	}
	printf("\n")
		return (0);
}
