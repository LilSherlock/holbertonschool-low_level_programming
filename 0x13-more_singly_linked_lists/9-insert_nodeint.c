#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *p, *new;
    unsigned int x = 0;

    p = *head;
    new = malloc(sizeof(listint_t));

    for (;x < idx - 1; x++)
    {
        p = p->next;
    }
    new->n = n;
    new->next = p->next;
    p->next = new;
    return (new);
}
