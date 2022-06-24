#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
