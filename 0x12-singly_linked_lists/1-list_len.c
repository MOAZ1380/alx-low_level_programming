#include "lists.h"

/**
 * list_len - e number of elements in
 * a li_t list.
 * @h: The linked list_t list.
 *
 * Return: Thements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
