#include "main.h"
/**
 * malloc_checked- m
 * @b:  v
 * Return: m
*/
void *malloc_checked(unsigned int b)
{
	void *p;
		p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
