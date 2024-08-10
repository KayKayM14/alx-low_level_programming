#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	 /* Traverse the list */
	while (head != NULL)
	{
		/* Store the current node in temp */
		temp = head;

		/* Move head to the next node */
		head = head->next;

		/* Free the current node */
		free(temp);
	}
}
