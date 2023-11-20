#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: a parameter to be checked
 * Return: returns size
**/

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		temp->next = NULL;

		free(temp);

		if (temp <= current)
			break;
	}
	printf("(nil), (nil)\n");
	*h = NULL;
	return (size);
}
