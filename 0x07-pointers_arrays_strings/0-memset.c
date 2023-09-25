#include"main.h"
/**
 * _memset - moa
 * @s: moaz
 * @n: m
 * @b: n
 * Return: mo
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
