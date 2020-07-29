#include "lists.h"
/**
 * pop_listint - main
 * @head: listint_t
 * Return: x
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	p = *head;
	*head = p->next;
	x = p->n;
	free(p);
	return (x);
}
