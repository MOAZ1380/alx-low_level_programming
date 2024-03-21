#include "lists.h"
/**
 * sum_dlistint - Su
 * @head: he
 * Return: s
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
