#include "lists.h"

/**
 * print_listint_safe - print out the listint_t safely
 * @head: a parameter to be checked
 * Return: returns count
**/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t i;
	const listint_t *current = head, *check;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		check = head;
		for (i = 0; i < count; i++)
		{
			if (check == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				exit(98);
			}
			check = check->next;
		}
		current = current->next;
	}
	return (count);
}
