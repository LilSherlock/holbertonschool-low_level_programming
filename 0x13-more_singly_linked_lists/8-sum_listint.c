#include "lists.h"
/**
 * sum_listint - main
 * @head: listint_t
 * Return: x
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int x = 0;

	p = head;

	while (p->next != NULL)
	{
		x += p->n;
		p = p->next;
	}
	x += p->n;
	return (x);
}
