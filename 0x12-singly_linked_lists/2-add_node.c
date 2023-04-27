#include "lists.h"

/**
 * add_node - function used to add a new node to the beginning
 * of list list_t
 * @head: the pointer pointing to the first node of the list
 * @str: the pointer pointing to constant character
 * Return: the address of the new element else NULL if unsuccessful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added_mem;
	unsigned int len = 0;

	added_mem = malloc(sizeof(list_t));
	if (added_mem)
	{
		added_mem->str = strdup(str);
		if (added_mem->str)
		{
			while (added_mem->str[len])
				len = len + 1;
			added_mem->len = len;
			added_mem->next = *head;
			*head = added_mem;

			return (added_mem);
		}

		free(added_mem);
		return (NULL);
	}
	return (NULL);
}


