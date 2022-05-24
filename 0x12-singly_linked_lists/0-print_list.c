#include  "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h);
{
size_t s = 0;
while
(c)
{
if
(!c->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", c->len, c->str);
c = c->next;
s++;
}
return (s);
}
