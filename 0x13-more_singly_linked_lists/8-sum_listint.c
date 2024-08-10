#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n)
 * in a listint_t linked list.
 * @head: Pointer to the start of the linked list.
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /*Initialize sum to 0*/
	listint_t *current = head; /*Start from the head of the list*/

	/*Traverse the list to add up all the data*/
	while (current != NULL)
	{
		sum += current->n; /*Add the data of the current node to sum*/
		current = current->next; /*Move to the next node in the list*/
	}
	return (sum); /*return the total sum of the data*/
}
