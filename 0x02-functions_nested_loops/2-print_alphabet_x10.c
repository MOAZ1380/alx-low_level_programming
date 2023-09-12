#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int c;
	char x;
for (c = 0; c < 10; c++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		printf("%c", x);
	}
	printf("\n");
	}
}
