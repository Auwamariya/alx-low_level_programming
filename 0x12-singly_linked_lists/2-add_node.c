#include <stdio.h>
#include "main.h"

/**
 * add_node - adds a new node at the beginning of a list_t linked list
 * @head: pointer to head of list_t linked list
 * @str:  const string for new node
 * Return: pointer to new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *newnode = NULL;
	unsigned int len = 0;

while
	(str && str[len])
len++;
newnode = malloc(sizeof(*newnode));
if (!newnode)
	return (NULL);
newnode->str = strdup(str);

newnode->len = len;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}
