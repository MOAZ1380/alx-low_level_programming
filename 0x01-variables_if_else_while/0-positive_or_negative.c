#include<stdio.h>
#include<time.h>
/**
 * main -entry point
 *
 * Description: positive or negative
 *
 * Return : 0 (Success)
 *
*/
int main(void)
{
int n;

if (n < 0)
{
printf("%d is negative", n);
}
else if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}
