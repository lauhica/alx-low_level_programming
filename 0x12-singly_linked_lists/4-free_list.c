#include "lists.h"

/**
 * free_list - function used to free a list_t list
 * @head: the pointer pointing to the start of the list list_t
 */

void free_list(list_t *head)
{
	list_t *curr_node;

	while ((curr_node = head) != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
