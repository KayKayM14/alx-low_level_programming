#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a
 * specific index in a listint_t list.
 * @head: Double pointer to the start of the linked list.
 * @index: The position in the list of the
 * node to be deleted (starting from 0).
 *
 * Return: 1 if the node was successfully deleted, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	/*Check if the list is empty*/
	if (*head == NULL)
		return (-1);

	/*Special case: Delete the head node*/
	if (index == 0)
	{
		temp = *head; /*Node to be deleted*/
		*head = (*head)->next; /*Move the head to the next node*/
		free(temp); /*free the old head node*/
		return (1);
	}
	current = *head; /*Start at the beginning of the list*/
	/*Traverse the list to find the node just before the one to delete*/
	while (current != NULL && count < index - 1)
	{
		current = current->next; /*move to the next node*/
		count++;
	}
	/*Check if we reached the desired position*/
	if (current == NULL || current->next == NULL)
		return (-1);
	/*Node to be deleted*/
	temp = current->next;
	current->next = temp->next; /*skip the node to delete*/
	free(temp);/*free the mem of the deleted node*/

	return (1); /*return success*/
}
