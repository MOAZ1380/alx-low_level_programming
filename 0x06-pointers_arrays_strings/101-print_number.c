#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
    int divisor = 1;
    int num = n;

    // Handle negative numbers
    if (n < 0)
    {
        _putchar('-');
        num = -num;
    }

    // Find the largest power of 10 less than or equal to num
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }

    // Print each digit
    while (divisor > 0)
    {
        int digit = num / divisor;
        _putchar(digit + '0');
        num %= divisor;
        divisor /= 10;
    }
}
