#include <stdio.h>

/**
 * This is my _putchar.c file
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
