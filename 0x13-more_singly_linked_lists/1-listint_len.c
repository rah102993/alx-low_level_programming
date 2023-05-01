#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that returns the
 * number of elements in a linked listint_t list.
 *@h: A pointer to listint_t.
 * Return: The number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
