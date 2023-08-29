#include "lists.h"

/**
 * sum_listint - calculates the sum of all elements in a listint_t list
 * @head: first node in a list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *list = head;

	while (list)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
