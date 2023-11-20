#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: a parameter to be checked
 * @index: a paramter to be checked
 * Return: returns 1
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	prev->next = temp->next;
	free(temp);

	return (1);
}
