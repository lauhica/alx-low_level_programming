#include "lists.h"

/**
 * listint_len - function used to print number
 * of elements returned
 * @h: the int elements of the list
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element = element + 1;
		h = h->next;
	}

	return (element);
}
