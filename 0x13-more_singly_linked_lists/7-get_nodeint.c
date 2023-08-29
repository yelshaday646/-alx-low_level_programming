#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index of node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ass_pointer = head;

	while (ass_pointer && x < index)
	{
		ass_pointer = ass_pointer->next;
		x++;
	}

	return (ass_pointer ? ass_pointer : NULL);
}
