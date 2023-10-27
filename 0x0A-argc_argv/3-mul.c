#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - moaz
 * @argc: m
 * @argv: m
 * Return: mo
*/
int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;
		if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%i\n", n1 * n2);
			return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
