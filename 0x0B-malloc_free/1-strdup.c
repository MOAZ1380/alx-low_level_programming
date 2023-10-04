#include"main.h"
/**
 * _strdup - moa
 * @str: mo
 * Return: m
*/
char *_strdup(char *str)
{
	char *i = malloc(strlen(str));

	if (str == NULL)
		return (NULL);

	strcpy(i, str);


	if (i == NULL)
		return (NULL);

	return (i);
}
