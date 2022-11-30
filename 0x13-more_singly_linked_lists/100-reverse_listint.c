#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of a list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *g;

	p = NULL;
	g = NULL;

	while (*head != NULL)
	{
		g = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = g;
	}

	*head = p;
	return (*head);
}
