#include  "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
size_t len = 0;
int i;
const list_t *c = h;

for (i = 0; c; i++)
{
if (c->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", c->len, c->str);
c = c->next;
len++;
}
return (len);
}
