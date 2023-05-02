#include "lists.h"

/**
 * sum_listint - function to sum elements
 * @head: pointer pointing to the start of
 * the list
 * Return: 0 if empty
 */

int sum_listint(listint_t *head)
{
	int addition = 0;

	while (head)
	{
		addition += head->n;
		head = head->next;
	}

	return (addition);
}
