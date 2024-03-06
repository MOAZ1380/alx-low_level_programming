#include <stdio.h>
/**
 * main - moa
 * Return: moa
*/
int main(void)
{
	int i;
	int j;

	for(i = 0; i <= 8; i++)
	{
		for(j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
