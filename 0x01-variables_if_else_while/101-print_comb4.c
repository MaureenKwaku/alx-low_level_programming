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
	int k;

	for (num = 0; num < 8; num++)
	{
		for (i = num + 1; i <= 9; i++)
		{
			for (k = i + 1; k <= 9; k++)
			{
				putchar('0' + num);
				putchar('0' + i);
				putchar('0' + k);

				if (num != 7 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}

