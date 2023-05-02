#include "lists.h"

/**
 * pop_listint - function used to delete head
 * element of listint_t
 * @head: pointer pointing to the start of
 * the list
 * Return: Head element's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_local;
	int i;

	if (*head == NULL)
		return (0);

	temp_local = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(temp_local);

	return (i);
}

