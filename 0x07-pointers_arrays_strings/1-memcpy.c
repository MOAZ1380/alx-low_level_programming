#include"main.h"
/**
 * _memcpy - moa
 * @dest: moa
 * @src: mo
 * @n: mo
 *
 * Return: mo
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
		for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
