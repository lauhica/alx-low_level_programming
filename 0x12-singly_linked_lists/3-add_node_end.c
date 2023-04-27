#include "lists.h"

/**
 * add_node_end - function used to add a new
 * element to the end of list list_t
 * @head: the pointer pointing to the beginning
 * of the list
 * @str: character string to be included
 * Return: the address of the new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *newnode;
	list_t *lastnode;
	char *s;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	s = strdup(str);
	if (str == NULL)
	{
		free(newnode);
			return (NULL);
	}

	for (len = 0; str[len];)
		len = len + 1;

	newnode->str = s;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}

