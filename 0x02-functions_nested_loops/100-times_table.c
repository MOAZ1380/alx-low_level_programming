#include "main.h"
/**
 * print_times_table - moaz
 * @n: moa
*/
void print_times_table(int n)
{
	int i;
	int x;
	int j = 0;

	if (n >= 0 && n <= 14)
	{

	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= n; x++)
		{
		j = ((i + (i * (x - 1))));
				printf("%d", j);
				if (j <= 9)
				{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
				}
				else if (j > 9 && j < 99)
				{
				putchar(',');
				putchar(' ');
				putchar(' ');
				}
				else
				{
				putchar(',');
				putchar(' ');
				}
				}
	putchar('\n');
}
putchar('\n');
}
}
