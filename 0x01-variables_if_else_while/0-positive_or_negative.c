#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main -entry point
 *
 * Description: positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
eldsse
{
printf("%d negative", n);
}
	return (0);
}
