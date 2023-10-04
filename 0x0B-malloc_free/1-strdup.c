#include"main.h"
/**
 * _strdup - moa
 * @str: mo
 * Return: m
*/
char *_strdup(char *str)
{
	char *i = malloc((sizeof(*str) * strlen(str)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (i == NULL)
	{
		return (NULL);
	}
	strcpy(i, str);
	return (i);
}
