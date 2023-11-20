#include "lists.h"

/**
 * listint_len - prints out the number of elements in a listint_t list
 * @h: a parameter to be checked
 * Return: return count
**/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
