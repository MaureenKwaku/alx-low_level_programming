#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - function to add a and b
 * @a: a parameter to be checked
 * @b: a parameter to be checked
 * Return: 1 or 0
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to find the difference of a and b
 * @a: a parameter to be checked
 * @b: a parameter to be checked
 * Return: 1 or 0
**/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply a and b
 * @a: a parameter to be checked
 * @b: a parameter to be checked
 * Return: 1 or 0
**/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function to divide a and b
 * @a: a parameter to be checked
 * @b: a parameter to be checked
 * Return: 1 or 0
**/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to return the remainder of a and b
 * @a: a parameter to be checked
 * @b: a parameter to be checked
 * Return: 1 or 0
**/

int op_mod(int a, int b)
{
	return (a % b);
}
