#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, i);
	}
	return (0);
}
