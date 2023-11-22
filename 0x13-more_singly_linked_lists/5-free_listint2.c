#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free the memory of a listint_t list
 * and sets the head to NULL
 * @head: a pointer to the head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	/*traverse the list and free each node*/
	if (head == NULL)
	
		while (*head)
		{
			temp_node = (*head)->next;
			free(*head);
			*head = temp_node;
		}

	/*set the head pointer to NULL*/
	*head = NULL;
}
