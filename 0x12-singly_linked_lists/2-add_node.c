#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /*create a new node*/

	new_node = malloc(sizeof(list_t));/*allocate memoory for new node*/
	if (!new_node)
		return (NULL);
	/*dubpilcate the string*/
	new_node->str = strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}
	/*set length of string*/
	new_node->len = strlen(str);

	/*point the new node to the current head*/
	new_node->next = *head;

	/*update the head to point to the new node*/
	*head = new_node;

	/*return the adress of the new node*/
	return (new_node);
}
