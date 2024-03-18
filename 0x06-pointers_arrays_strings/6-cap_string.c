#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * cap_string - mo
 * @str: moa
 * Return: mo
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (isspace(str[i]) || str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return str;
}
