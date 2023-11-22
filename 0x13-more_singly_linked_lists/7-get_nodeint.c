#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of the list, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/*traverse the list*/
	while (head != NULL)
	{
		/*if the count is equal to the passed index,return current node*/
		if (count == index)
			return (head);

		/*increment count and move to the next node*/
		count++;
		head = head->next;
	}
	/*if the node does not exist, return NULL*/
	return (NULL);
}
