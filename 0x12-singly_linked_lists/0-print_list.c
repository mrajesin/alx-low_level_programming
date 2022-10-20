#include "lists.h"

/**
 * print_list - prints list.
 * @h: head of linked list
 * Return: struct
 */

size_t print_list(const list_t *h)
{
	size_t l_node;

	l_node = 0;
	while (h != NULL)
	{
		l_node++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (l_node);
}
