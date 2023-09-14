#include"main.h"
/**
 * _isdigit - check
 *
 * @c: input
 *
 * Return: Always 0.
*/
int _isdigit(int c)
{
	for (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
