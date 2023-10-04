#include"main.h"
/**
 * _strdup - moa
 * @str: mo
 * Return: m
*/
char *_strdup(char *str)
{
	char *i = malloc((sizeof(char) * strlen(str)) + 1);
	strcpy(i, str);

	if (str == NULL)
		return (NULL);

	if (i == NULL)
		return (NULL);

	return (i);
}
