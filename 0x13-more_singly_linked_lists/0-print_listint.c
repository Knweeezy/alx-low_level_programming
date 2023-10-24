#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print
 * @h: A pointer to the head
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t op = 0;

	while (h)
	{
		op++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (op);
}
