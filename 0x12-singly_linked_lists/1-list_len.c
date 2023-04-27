#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: pointer to structure.
 * Return: number of elements in h.
 */

size_t list_len(const list_t *h)
{

unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

