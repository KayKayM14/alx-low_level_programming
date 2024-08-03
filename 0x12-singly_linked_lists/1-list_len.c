#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0; /*counter starting at 0 (start at first box)*/
	while (h) /*as long as current node is not NULL (there's more boxes)*/
	{
		count++; /*count this node (count it)*/
		h = h->next; /*move to the next node (next box)*/
	}
	return (count); /*return the total count of nodes (how many box's*/
}
