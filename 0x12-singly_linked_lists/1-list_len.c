#include "lists.h"

/**
 * list_len - function used to print out the number
 * of items that are stored in a singly linked list
 * @h: the pointer pointing to the next node or value
 * Return: the number of items stored
 */

size_t list_len(const list_t *h)
{
	size_t mem = 0;

	while (h)
	{
		mem = mem + 1;
		h = h->next;
	}
	return (mem);
}
