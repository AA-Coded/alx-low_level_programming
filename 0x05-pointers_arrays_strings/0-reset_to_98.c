#include "main.h"
/**
 * reset_to_98 - A function that resets int arguement to 98
 * @n: integer parameter to reset to 98
 * Return: Nothing
 */
void reset_to_98(int *n)
{
	int **m = &n;
	int reset = 98;

	**m = reset;
}
