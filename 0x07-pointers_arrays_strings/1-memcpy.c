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
	 unsigned int a = 0;
		for (; a < n; a++)
	{
		dest[a] = src[a];
	}
		return (dest);
}
