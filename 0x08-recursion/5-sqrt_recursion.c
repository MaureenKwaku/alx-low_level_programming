#include "main.h"

/**
* _sqrt_a- recurses to find the natura
* @b: is an iterator
* @a: the parameter to be checked
* Return: 1 or 0;
**/
int _sqrt_a(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	return (_sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - return the natural square root
 * sqrt- recurses to find the natura
 * @n: parameter to be checked
 * Return: 1 or 0
**/
int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
