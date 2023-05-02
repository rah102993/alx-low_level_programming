#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: a double pointer to listint_t.
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current >= next)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;

	return (count);
}
