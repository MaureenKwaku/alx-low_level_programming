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
	int next;
	int sum = 2;

	while (num2 <= 4000000)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;

		if (num2 % 2 == 0)
		{
			sum = sum + num2;
		}
	}
	printf("%d\n", sum);
	return (0);
}
