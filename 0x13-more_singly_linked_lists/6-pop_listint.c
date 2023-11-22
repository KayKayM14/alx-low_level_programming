#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - delete the head of the node of listint_t
 * @head: a pointer to the head of the linked list
 *
 * Return: the data of the head node or 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int i;

	/*if list is empty, return 0*/
	if (*head == NULL)
		return (0);

	/*save the data of the head node*/
	i = (*head)->n;

	/*move the head pointer to the next node*/
	temp_head = *head;
	*head = (*head)->next;

	/*free the old ehad node*/
	free(temp_head);

	/*return the data of the head node*/
	return (i);
}
