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
	int i, val;
	int unit[5] = {25, 10, 5, 2, 1}

	val = 0;
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (atoi(argv[1]) >= unit[i])
			{
				atoi(argv[1]) -= unit[i];
				val++;
			}
		}
		printf("%d\n", val);
		return (0);
	}
}
