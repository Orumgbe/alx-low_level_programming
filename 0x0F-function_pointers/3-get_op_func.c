#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - function pointer to get operator
 * @s: operation to be performed
 * Return: pointer to function that corresponds to operator
 * On error, NULL
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
