#include "lists.h"

/**
 * pop_listint - deletes the head node.
 * @head: pointer to the first element.
 * Return: deleted data /0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_pointer;
	int deleted_head_node;

	if (!head || !*head)
		return (0);

	deleted_head_node = (*head)->n;
	temp_pointer = (*head)->next;
	free(*head);
	*head = temp_pointer;

	return (deleted_head_node);
}
