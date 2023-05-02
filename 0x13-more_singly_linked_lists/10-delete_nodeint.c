#include "lists.h"

/**
 * delete_nodeint_at_index - function used to
 * delete index
 * @head: pointer pointing to the start of
 * the list
 * @index: where node must be deleted
 * Return: 1 if successful else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int element;
	listint_t *temp_local, *c = *head;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (element = 0; element < (index - 1); element++)
	{
		c = c->next;
	}

	temp_local = c->next;
	c->next = temp_local->next;
	free(temp_local);
	return (1);
}
