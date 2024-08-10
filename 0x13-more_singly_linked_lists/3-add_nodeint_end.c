#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to be added as the new node's data.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /*pointer to the new node*/
	listint_t *temp; /*temp pointer to traverse the list*/

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /*return NULL if mem allocation fails*/

	/* Set the new node's data and next pointer */
	new_node->n = n;
	new_node->next = NULL;

	 /* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Link the last node to the new node */
	temp->next = new_node;

	return (new_node);
}
