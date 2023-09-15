#include"main.h"
/**
 * print_square - print a square
 *
 * @size: is the
 *
 * Return: Always 0.
*/
void print_square(int size)
{
	int r, column;

	for (r = 1; r <= size; r++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
