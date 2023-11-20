#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the listint_t
 * @head: a paameter to be checked
 * @index: a parameter to be checked
 * Return: returns null
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}

		head = head->next;
		count++;
	}
	return (NULL);
}
