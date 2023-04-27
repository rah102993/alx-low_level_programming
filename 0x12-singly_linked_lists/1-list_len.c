#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - a function that returns the number of
* elements in a linked list_t list.
* @h: pointer to list_t list.
*
* Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
