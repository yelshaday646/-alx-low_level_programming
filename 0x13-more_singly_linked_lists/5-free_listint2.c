#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *head_nodes_tobe_free;

	if (head == NULL)
		return;

	while (*head)
	{
		head_nodes_tobe_free = (*head)->next;
		free(*head);
		*head = head_nodes_tobe_free;
	}

	*head = NULL;
}
