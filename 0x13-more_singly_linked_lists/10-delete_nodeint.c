#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index,
 * index of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (count < index - 1 && (*head)->next != NULL)
	{
		(*head) = (*head)->next;
		count++;
	}

	if (count != index - 1 || (*head)->next == NULL)
		return (-1);

	temp_node = (*head)->next;
	(*head)->next = temp_node->next;
	free(temp_node);

	return (1);
}

