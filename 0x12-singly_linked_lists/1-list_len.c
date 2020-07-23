#include "lists.h"
/**
 * list_len - main
 * @h: list_t
 * Return: x
 */
size_t list_len(const list_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
