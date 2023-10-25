#include"main.h"
#include"stdio.h"
int _sqrt(int n, int i);

/**
 * _sqrt - moaz
 * @n: mo
 * Return: moaz
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - moa
 * @n: moa
 * @i: moaz
 *
 * Return: mo
*/
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	_sqrt(n, i + 1);
}
