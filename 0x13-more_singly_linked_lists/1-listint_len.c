#include "lists.h"
/**
 * listint_len - main
 * @h: listint_t
 * Return: x
 */
size_t listint_len(const listint_t *h)
{
	unsigned int x = 0;

	while(h)
	{
		x += 1;
		h = h->next;
	}
	return (x);
}
