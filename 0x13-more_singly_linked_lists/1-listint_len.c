#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns
 * @h: A pointe
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t op = 0;

	while (h)
	{
		op++;
		h = h->next;
	}

	return (op);
}
