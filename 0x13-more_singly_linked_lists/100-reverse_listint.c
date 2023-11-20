#include "lists.h"

/**
 * reverse_listint - reverse the listint_t
 * @head: a parameter to be checked
 * Return: returns *head
**/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
