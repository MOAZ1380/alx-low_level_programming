#include"main.h"
/**
 * _strcpy - mos
 * @dest: moa
 * @src: moa
 * Description: copy
 * Return: pointer to 'dest'
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n');

	return (dest);
}
