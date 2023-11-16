#include "lists.h"

/**
 * list_len - prints out the number of elements in  linked list
 * @h: a parameter to be chedked
 * Return: returns the number of elements in a linked list_t list
**/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
