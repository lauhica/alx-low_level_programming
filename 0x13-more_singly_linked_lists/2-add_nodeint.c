#include "lists.h"

/**
 * add_nodeint - function used to add an element to a list
 * @head: pointer pointing to the list
 * @n: elements of the list
 * Return: NULL if unsuccessful else the pointer address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
