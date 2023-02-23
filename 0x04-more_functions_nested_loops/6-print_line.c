#include "main.h"

/**
 * print_line - Draw a straight line according to the parameter
 * @n: The number of lines to be drawn
 * Return: empty
 */

void print_line(void)
{       
        int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
