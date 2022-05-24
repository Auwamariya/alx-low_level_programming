#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t linkedlist
 * @head: pointer to head of list_t linked list
 * @str:  const string for new node
 * Return: pointer to new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *last = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;


	new = malloc(sizeof(*new));
	if (new)
	{
		new->str  = strdup(str);
		new->len  = len;
		new->next = NULL;
		if (!*head)
			*head = new;
		else
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (new);
}
