#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - To add a new node to the beginning of a linked list.
 * @head: a pointer to the pointer to te head of the linked list
 * @n: the data to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	/*allocate the memory for a new node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL); /*return null if malloc fails*/

	/*initalize the new node*/
	new_node->n = n;
	new_node->next = *head;

	/*update the head to point to the new node*/
	*head = new_node;

	return (new_node);
}
