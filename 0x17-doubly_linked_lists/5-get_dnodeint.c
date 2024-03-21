#include "lists.h"
/**
 * get_dnodeint_at_index - return
 * @head: head of li
 * @index: node
 * Return: no
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
