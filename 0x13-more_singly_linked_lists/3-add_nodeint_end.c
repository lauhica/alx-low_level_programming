#include "lists.h"

/**
 * add_nodeint_end - function used to add
 * elements to a list
 * @head: pointer pointing to the start of the
 * list
 * @n: the numbers of elements
 * Return: NULL if unsuccessful else the
 * address of the next element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element, *last_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
		*head = new_element;
	else
	{
		last_element = *head;
		while (last_element->next != NULL)
			last_element = last_element->next;
		last_element->next = new_element;
	}
	return (*head);
}
