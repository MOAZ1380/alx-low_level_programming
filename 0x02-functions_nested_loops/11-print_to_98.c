#include "main.h"
/**
 * print_to_98 - mo
 * @n: mo
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%i", n);
	}
	printf("\n");
}
