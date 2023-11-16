#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints out the elements of a lists_t list
 * @h: a parameter to be checked
 * Return: returns the number of nodes
**/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%ld] (nil)\n", count);
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)strlen(h->str), h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
