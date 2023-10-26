#include"main.h"
/**
 * _strcat - mo
 * @dest: moaz
 * @src: moaz
*/
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	return (dest);
}
