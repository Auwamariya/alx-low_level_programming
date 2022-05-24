#include "lists.h"


/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to const list_t linked list
 * Return: size_t number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		char *fmt = "[%u] %s\n";

		if (!h->str)
			printf(fmt, 0, "(nil)");
		else
			printf(fmt, h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
