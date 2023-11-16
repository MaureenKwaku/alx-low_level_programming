#include "lists.h"

/**
 * print_before_main - a function to print the lines
**/

void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("(A tortoise, having pretty good sense ");
	printf("of a hare's nature, challenges one to a race.)\n");
	return (0);
}
