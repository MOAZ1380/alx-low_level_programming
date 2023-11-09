#include "variadic_functions.h"
/**
 * print_numbers - m
 * @separator: moa
 * @n: m
 * @...: m
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	unsigned int in;

	va_start(nu, n);

	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(nu, int));

			if (in != (n - 1) && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");

	va_end(nu);
}
