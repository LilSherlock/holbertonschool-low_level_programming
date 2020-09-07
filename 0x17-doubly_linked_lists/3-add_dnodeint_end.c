#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *node;
    dlistint_t *last = *head;

    node = malloc(sizeof(dlistint_t));
    if (node == NULL)
        return (NULL);
    node->n = n;
    node->next = NULL;
    if (*head == NULL)
    {
        node->prev = NULL;
        *head = node;
        return(node);
    }
    while (last->next)
        last = last->next;
    last->next = node;
    node->prev = last;
    return (node);
}
