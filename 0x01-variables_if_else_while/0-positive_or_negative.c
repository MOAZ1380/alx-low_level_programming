#include<stdio.h>
#include<time.h>
/**
 * more headers goes there
 *
 * betty style doc for function main goes there
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
