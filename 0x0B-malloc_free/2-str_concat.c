#include"main.h"
/**
 * str_concat- moaz
 * @s1: moa
 * @s2: moa
 * Return: mo
*/
char *str_concat(char *s1, char *s2)
{
	char *i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);

		if (i == NULL)
			return (NULL);

	i = strcat(s1, s2);
		return (i);
}

