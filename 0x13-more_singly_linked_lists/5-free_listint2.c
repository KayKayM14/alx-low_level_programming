#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: Double pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head; /* Store the current head node */
		/*move the head pointer to the next node*/
		*head = (*head)->next;
		free(temp); /*free the old head node*/
	}
	*head = NULL; /*set the head to NULL*/
}
