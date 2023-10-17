#include "main.h"
/**
 * swap_int - swap to integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
