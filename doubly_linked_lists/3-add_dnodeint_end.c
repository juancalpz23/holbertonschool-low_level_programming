#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of  the list
 * @head: double ptr to the head of the list
 * @n: data
 * Return: address to the new node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *s, *e;

	if (head == NULL)
		return (NULL);

	s = malloc(sizeof(dlistint_t));

	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = NULL;

	if (*head == NULL)
	{
		s->prev = NULL;
		*head = s;
		return (s);
	}
	e = *head;

	for (; e->next != NULL;)
	{
		e = e->next;
	}
	e->next = s;
	s->prev = e;
	return (s);
}
