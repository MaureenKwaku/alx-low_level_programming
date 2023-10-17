#include "main.h"
/**
 * print_array - print array
 * @a: parameter to be worked on
 * @n: parameter to be worked on
 * Return - always 0;
**/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
