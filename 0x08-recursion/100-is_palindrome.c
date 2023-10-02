#include"main.h"
/**
* is_palindrome - mo
* @s: moaz
* Return: moaz
*/
int is_palindrome(char *s)
{
	int n = 0;
	if (s[n] = '\0' && s[n - 1] = s[1] && s[n - 2] = s[2] )
	{
		return (1);
	}
	else (s[n] = '\0' && s[n - 1] != s[1] && s[n - 2] != s[2])
	{
		return (0);
	}
	n++;
	return (is_palindrome(*s);

}
