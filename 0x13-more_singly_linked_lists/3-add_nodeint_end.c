#include "lists.h"

/**
 * add_nodeint_end - add a new node at the
 *			end of a listint_t list
 * @head: a pointer to the address of the
 *		head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: if the function falls - Null
 *		otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;
	(void)temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
