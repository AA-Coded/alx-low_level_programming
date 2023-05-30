#include "main.h"
/**
 * swap_int - A function that swaps the values of 2 ints
 * @a: pointer to an int parameter
 * @b: pointer to an int parameter
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
