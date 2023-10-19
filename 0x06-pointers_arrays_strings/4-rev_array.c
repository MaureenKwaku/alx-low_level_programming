#include "main.h"
/**
 * reverse_array- reverse the content of an array
 * @a: parameter to be worked on
 * @n: parameter to be worked on
 * Return: dest
**/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
