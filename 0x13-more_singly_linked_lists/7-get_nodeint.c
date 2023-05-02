#include "lists.h"

/**
 * get_nodeint_at_index - function used to get
 * an element that is unspecified
 * @head: pointer pointing to the start of the
 * list
 * @index: location of element to obtain
 * Return: NULL if no element is found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int element;

	for (element = 0; element < index; element++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
