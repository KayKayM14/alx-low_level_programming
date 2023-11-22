#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) in a listint_t
 * @head: a pointer of the head
 *
 * Return: the sum of all data (n) in listint_t
 * if list is empty return to 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
