#include "main.h"

/**
 * print_more_numbers - Prints 10 times the nmber since 0 up to 14
 * Return: 10 times the number since 0 up to 14
 */
void print_more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}