#include"main.h"
/**
 * print_diagonal - check
 *
 * @n: is the
 *
 * Return: Always 0.
*/
void print_diagonal(int n)
{
	int po, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (po = 1; po <= n; po++)
		{
			for (sp = 1; sp <= po; sp++)
				_putchar(' ');
			_putchar(92); /* is equal to '/' char */
			_putchar('\n');
		}
	}
}
