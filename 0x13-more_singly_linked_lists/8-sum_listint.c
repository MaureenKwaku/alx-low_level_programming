#include "lists.h"

/**
 * sum_listint - prints out the sum of all the data of the listint_t
 * @head: a parameter to be checked
 * Return: returns the sum of all the data in the list
**/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
