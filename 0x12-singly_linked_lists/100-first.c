#include <stdio.h>
/**
 * print_first - function prototype name
 * Return: return type void
 */
void print_first(void) __attribute__((constructor));
/**
 * print_first - Prints text before main
 * Return: void
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
