#include "main.h"

/**
 * _abs - function to find absolte value of a number
 *
 * @a: function parameter
 *
 * Return: is a or -a
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
