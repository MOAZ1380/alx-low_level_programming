#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strlen - moaz
 *
 * @s: moaz
 *
 * Return: Always 0.
*/
int _strlen(char *s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
	++n;
	return (n);
}
