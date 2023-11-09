#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
**/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	int (*operation[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	char operators[5] = {'+', '-', '*', '/', '%'};
	int index = -1;

	for (int i = 0; i < 5; i++)
	{
		if (*operator == operators[i])
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		printf("Error\n");
		return (99);
	}
	if (num2 == 0 && (index == 3 || index == 4))
	{
		printf("Error\n");
		return (100);
	}
	result = operation[index](num1, num2);
	printf("%d\n", result);
	return (0);
}
