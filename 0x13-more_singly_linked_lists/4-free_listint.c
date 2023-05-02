#include "lists.h"

/**
 * free_listint - function used to free listint_t
 * @head: pointer pointing to the start of the list
 * Return: the freed list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_local;

	while (head)
	{
		temp_local = head->next;
		free(head);
		head = temp_local;
	}
}
