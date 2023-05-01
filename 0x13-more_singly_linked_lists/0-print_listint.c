#include "lists.h"

/**
 * print_listint - function used to print
 * integer elements of listint_t list
 * @h: the int elements of the list
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (element);
}
