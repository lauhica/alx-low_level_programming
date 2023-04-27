#include "lists.h"

/**
 * print_list - function used to print all elements contained in list_t
 * @h:the pointer pointing to the next node and value
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int mem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h -> next;
		mem = mem + 1;
	}
	return (mem);
}
