#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints number of command line argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
