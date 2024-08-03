#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * This function frees all nodes in the linked list,
 * including the string data
 */

void free_list(list_t *head)
{
	list_t *temp;

	/*traverse through the list*/
	while (head != NULL)
	{
		temp = head->next; /*save the next node*/
		free(head->str); /*free the string in the current node*/
		free(head); /*free the current node itself*/
		head = temp; /*mve to the next node*/
	}

}
