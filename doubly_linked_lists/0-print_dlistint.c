#include "lists.h"
/**
 * print_dlistint - Prints al the elements in a doubly linked list
 * @h: Input structure
 * Return: Numberof elements in the struct
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
