#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the node's data
 * @head: a parameter to be checked
 * Return: return data
**/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
