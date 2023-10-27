#include "main.h"
/**
 * is_prime_number2 - function to print the primes
 * @a: parameter to be checked
 * @b: parameter to be checked
 * Return: 1 or 0
**/
int is_prime_number2(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else if (a % b == 0 && b > 0)
	{
		return (0);
	}
	return (is_prime_number2(a, b - 1));
}



/**
 * is_prime_number - function to print the primes
 * @n: parameter to be checked
 * Return: 1 or 0
**/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number2(n, n - 1));
}
