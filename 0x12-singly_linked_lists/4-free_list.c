#include "lists.h"

/**
 * free_list - frees all the nodes in a linked list
 * @head: pointer to the head of list_t linked list
 */
 
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
