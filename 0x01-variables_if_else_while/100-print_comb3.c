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

	for (num = 0; num < 9; num++)
	{
		for (i = num + 1; i < 10; i++)
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

	putchar('\n');
	return (0);
}
