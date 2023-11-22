#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - responsible for freeing the memory of a listint_t.
 * @head: a pointer to the head of the linked list.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	/*traverse the list and free each node*/
	current = head;
	while (head != NULL)
	{
		next = current->next; /*save the next pointer*/
		free(current); /*free the current node*/
		current = next; /*move to the next node*/
	}
}
