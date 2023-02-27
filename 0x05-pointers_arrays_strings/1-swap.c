#include <stdio.h>
/**
 * swap_int - swaps the value of two integers.
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
	/* The function that swaps the values of the two integers.*/
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
