#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - performs simple math operations
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 * on error, exit with status
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
		strcmp(argv[2], "+") && strcmp(argv[2], '-')
		&& strcmp(argv[2], '*') && strcmp(argv[2], '/')
		&& strcmp(argv[2], '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
