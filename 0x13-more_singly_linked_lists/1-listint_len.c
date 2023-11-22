#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - return the number o elements in listint_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
