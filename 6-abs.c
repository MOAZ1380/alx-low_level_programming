#include"main.h"
#include<stdio.h>
/**
  _abs - function that computes
 *
 * @c: takes in integer type input for function
 *
 * Return: 0 Always
*/
int _abs(int n)
{
	int i;
	if (n > 0 || n == 0)
		return (n);
	else if (n < 0)
		i = (-1) * n;
			return (i);
	return (0);
}		
