#include "lists.h"
#include <stdlib.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * loop_listint_count - counts the number of nodes in the looped lst
 * @head: a pointer to the head of the list
 *
 * Return: if the list is not looped - 0
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees listint_t list safely
 * @h: a pointer to the head of the list
 *
 * Return: the size of the list that was freed
 *
 * Description: the function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
