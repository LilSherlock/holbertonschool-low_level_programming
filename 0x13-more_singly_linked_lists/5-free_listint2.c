#include "lists.h"
/**
 * free_listint2 - main
 * @head: listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head)
	{
		while (*head)
		{
			p = *head;
			*head = p->next;
			free(p);
		}
	}
}
