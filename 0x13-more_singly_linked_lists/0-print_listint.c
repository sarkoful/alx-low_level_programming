#include "lists.h"

/**
 *print_listint - function to print the values stored in the list
 *@h: pointer to the elements in the nodes in the lists
 *Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
