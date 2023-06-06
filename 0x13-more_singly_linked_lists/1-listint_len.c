#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a listint_t lists
 * @h: linked list of type listint_t to count
 *
 * Return: returns number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
