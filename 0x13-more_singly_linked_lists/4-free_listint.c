#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *nodes_tobe_free;

	while (head)
	{
		nodes_tobe_free = head->next;
		free(head);
		head = nodes_tobe_free;
	}
}
