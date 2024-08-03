#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	/*allocate memory for the new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /*Return null if memory allocation fails*/
	}

	/*duplicate the string and assign it to the new node*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /*free prev allocated mem if strdup fails*/
		return (NULL);
	}

	/*set the len of the str and the next pointer to NULL*/
	new_node->len = strlen(str);
	new_node->next = NULL;

	/*if the list is empty, the new node becomes the head*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/*traverse to the end of the list*/
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/*append the new node at the end*/
		temp->next = new_node;
	}
	return (new_node);
	/*return the address of the new node*/
}
