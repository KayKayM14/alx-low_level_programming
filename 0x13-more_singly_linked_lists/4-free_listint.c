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
	listint_t *temp_node;

	/*traverse the list and free each node*/

	while (head != NULL)
	{
		temp_node = head; /*save the next pointer*/
		head = head->next; /*move to the next node*/
		free(temp_node); /*free the current node*/
	}
}
