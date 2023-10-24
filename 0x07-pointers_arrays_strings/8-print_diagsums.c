#include "main.h"
/**
 * print_diagsums - function to print two diagonals
 * @a: parameter to be checked
 * @size: parameter to be checked
 * Return: 1 or 0
 * **/

void print_diagsums(int *a, int size)
{
	int num1, num2, x;

	num1 = 0;
	num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 = num1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		num2 = num2 + a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
