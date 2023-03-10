#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argv: Argument vector
 * @argc: Argument count
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
