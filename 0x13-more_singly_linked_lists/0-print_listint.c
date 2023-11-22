#include <stdio.h>
#include "lists.h"

/**
 * print_listint- Iterates through a list of integers and prints each element.
 * @h: the head pointer of the list
 *
 * Return: the total number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *node = h;

	/*Travers the node*/
	for (node = h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		nodes++;

	}

return (nodes);
}
