#include "lists.h"

/**
 * free_list - frees all the nodes in a linked list
 * @head: pointer to the head of list_t linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (; head;)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
