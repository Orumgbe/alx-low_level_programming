#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Returns cent change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, val, result;
	int unit[5] = {25, 10, 5, 2, 1};

	val = atoi(argv[1]);
	result = 0;
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (val >= unit[i])
			{
				val -= unit[i];
				result++;
			}
		}
		printf("%d\n", result);
		return (0);
	}
}
