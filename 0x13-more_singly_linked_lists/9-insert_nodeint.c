#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a listint_t list.
 * @head: Double pointer to the start of the linked list.
 * @idx: The position in the list where the
 * new node should be added (starting from 0).
 * @n: The data (n) for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	/*Create a new node and check if memory allocation was successful*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*Set the data for the new node*/

	/*Special case: Insert at the beginning of the list (index 0)*/
	if (idx == 0)
	{
		new_node->next = *head; /*Point the new node to current head*/
		*head = new_node; /*Update head to the new node*/
		return (new_node);
	}
	current = *head; /*Start at the beginning of the list*/

	/*Traverse the list to find the node just before the insertion point*/
	while (current != NULL && count < idx - 1)
	{
		current = current->next; /*Move to the next node*/
		count++;
	}

	/*Check if we reached the desired position*/
	if (current == NULL) /*If the index is out of bounds*/
	{
		free(new_node); /*Free memory of the new node*/
		return (NULL);
	}
	/*Insert the new node at the desired position*/
	/*Point new node to the next node in the list*/
	new_node->next = current->next;
	current->next = new_node; /*Link the previous node to the new node*/

	return (new_node); /*return the new node*/
}
