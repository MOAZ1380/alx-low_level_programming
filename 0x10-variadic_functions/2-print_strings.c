#include "variadic_functions.h"
/**
 * print_numbers - m
 * @separator: moa
 * @n: m
 * @...: m
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);
			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
