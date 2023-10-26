#include"main.h"
/**
 * _puts_recursion - moa
 *
 * @s: moaz
 *
 * Return: moaz
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	s++;
	_puts_recursion(s);
}
