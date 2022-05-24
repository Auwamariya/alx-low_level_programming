#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/**
 * struct list_s - singly linked list
 * @next: points to the next node
 * @len : length of a string
 * @str : string
 * Description: singly linked list node structure
 * for ALX project
 */

typedef struct list_s
{
unsigned int len;
char *str;
struct list_s *next;
} list_s;
#endif
