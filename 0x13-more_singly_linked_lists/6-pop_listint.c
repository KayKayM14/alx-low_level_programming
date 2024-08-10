#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: The data (n) of the deleted head node.
 *         If the list is empty, return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* Check if the list is empty */
	if (*hhead == NULL)
		return (0);

	/* Store the data of the head node */
	n = (*head)->n;

	/* Move the head pointer to the next node */
	temp = *head;
	*head = (*head)->next;

	/* Free the old head node */
	free(temp);

	return (n);
}
