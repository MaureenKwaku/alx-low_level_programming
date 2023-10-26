#include "main.h"
/**
 * _pow_recursion - prototype to raise x to the power y
 * @x: parameter to be checked
 * @y: parameter to be checked
 * Return: 1 or 0
 * **/

int _pow_recursion(int x, int y)
{
		if (y < 0)
		{
			return (-1);
		}
		else if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, (y - 1)));
		}
}
