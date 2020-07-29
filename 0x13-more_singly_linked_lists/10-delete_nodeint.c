#include "lists.h"
/**
 * delete_nodeint_at_index - main
 * @head: listint_t
 * @index: int
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *nodeFree;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	for (; x < index - 1; x++)
	{
		p = p->next;
		if (index == 0)
			return (-1);
	}
	nodeFree = p->next;
	p->next = nodeFree->next;
	free(nodeFree);
	return (1);
}
