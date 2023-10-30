#include"main.h"
/**
 * _strdup - moa
 * @str: mo
 * Return: m
*/
char *_strdup(char *str)
{
	char *i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = malloc((sizeof(char) * strlen(str)));

	if (i == NULL)
	{
		return (NULL);
	}
	strcpy(i, str);
	return (i);
}
