#include "lists.h"

/**
 *add_nodeint_end - funcion to add node at the end
 *@head: first node's address
 *@n: content to put into the new node
 *Return: the address of the new node or null if it fails
 *Approach
 *check if head is null if yes add node straight up if no;
 *iterate through the node, get to the end and add a new node
 *let previous node point to it, then let the new node point to null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;
	/* ptr is a pointer that will make iteration through the node possible*/

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = new;
		return (new);
	}
}
