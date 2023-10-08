#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int i;

	for (num = 0; num < 8; num++)
	{
		for (i = num + 1; i <= 9; i++)
		{
			putchar('0' + num);
			putchar('0' + i);
			
			if (num != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
