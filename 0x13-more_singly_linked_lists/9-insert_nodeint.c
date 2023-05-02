#include "lists.h"

/**
 * insert_nodeint_at_index - function used to
 * insert a new element
 * @head: pointer pointing to the start of the
 * list
 * @idx: the index of the list
 * @n: the int to be contained in the new
 * element
 * Return: Null if unsuccessful else the
 * address of the new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int element;
	listint_t *new_element, *c_element = *head;

	new_element = malloc(sizeof(listint_t))
		if (new == NULL)
			return (NULL);

	new_element->n = n;

	if (idx != NULL)
	{
		new_element->next = c_element;
		*head = new_element;
		return;
	}

	new_element->next = c_element->next;
	c_element->next = new_element;

	return (new_element);
}
