#include"main.h"
/**
 * _strdup - moa
 * @str: mo
 * Return: m
*/
char *_strdup(char *str)
{
	char *i = malloc(strlen(str) + 1);

	if (str == NULL)
		return (NULL);

	strcpy(i, str);
	return (i);
	free(i);
}
