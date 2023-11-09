#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
**/

int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (1);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		return (1);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
