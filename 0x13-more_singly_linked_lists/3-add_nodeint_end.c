#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the head of the linked list
 * @n: the data to be added to the new node.
 *
 * Return: the address of new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL); /*return NULL if malloc fails*/

	/*initialize the new node*/
	new_node->n = n;
	new_node->next = NULL; /*the new node will be the last node*/

	/*check if the list is empty*/
	if (*head == NULL)
	{
		*head = new_node; /*if the list is empty, the new node becomes the head*/
		return (new_node);
	}
	else
	{
		/*find the last node*/
		listint_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next; /*update last_node to point to the next node*/

		/*set the next pointer of the last node to the new node */
		last_node->next = new_node;

		return (new_node);
	}
}
