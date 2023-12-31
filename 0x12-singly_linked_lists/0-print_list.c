#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of sigset_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
		while (h != NULL)
		{
			if (h->str == NULL)

				printf("[0] (nil)\n");

			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			nodes++;

		}
	return (nodes);
}
