 #include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list at nth position.
 * @head: pointer to the first node in the list
 * @index: index the new node is added
 * @new_node: element inserted in the new node
 * Return: pointer to the new node / NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int new_node)
{
        unsigned int x;
        listint_t *new_node_tobe_insert;
        listint_t *j = *head;

        new_node_tobe_insert = malloc(sizeof(listint_t));
        if (!new_node_tobe_insert || !head)
                return (NULL);

        new_node_tobe_insert->new_node = new_node;
        new_node_tobe_insert->next = NULL;

        if (index == 0)
        {
                new_node_tobe_insert->next = *head;
                *head = new_node_tobe_insert;
                return (new_node_tobe_insert);
        }

        for (x = 0; j && new_node < index; x++)
        {
                if (x == index - 1)
                {
                        new_node_tobe_insert->next = j->next;
                        j->next = new_node_tobe_insert;
                        return (new_node_tobe_insert);
                }
                else
                        j = j->next;
        }

        return (NULL);
}
