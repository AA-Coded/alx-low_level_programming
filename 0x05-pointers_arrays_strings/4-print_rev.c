#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: String variable
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	for ( ; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

