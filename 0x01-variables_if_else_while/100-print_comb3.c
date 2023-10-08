#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar('0' + (num / 10));
		putchar('0' + (num % 10));
	}
	return (0);
}
