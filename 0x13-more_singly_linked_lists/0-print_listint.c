#include "lists.h"

/**
 * print_listint - a function that prints all elements of listint_t
 * @h: a parameter to be checked
 * Return: count
**/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
