#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverse a listint_t
 * @head: a pointer to the header of linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next; /*save the next node*/
		current->next = prev; /*reverse the link*/

		/*move one step forward in the list*/
		prev = current;
		current = next;
	}

	*head = prev; /*update the head to the new first node of rv.list*/

	return *head;
}
