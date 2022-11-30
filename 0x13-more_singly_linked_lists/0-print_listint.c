#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element of a listint_t list
 * @h: a pointer to the head of the list_t list
 *
 * Return: the num. of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}

	return (nnodes);
}
