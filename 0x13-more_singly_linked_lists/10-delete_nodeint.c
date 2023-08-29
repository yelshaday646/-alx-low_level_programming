#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pointer1 = *head;
	listint_t *pointer2 = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pointer1);
		return (1);
	}

	while (x < index - 1)
	{
		if (!pointer1 || !(pointer1->next))
			return (-1);
		pointer1 = pointer1->next;
		x++;
	}


	pointer2 = pointer1->next;
	pointer1->next = pointer2->next;
	free(pointer2);

	return (1);
}
