#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}
