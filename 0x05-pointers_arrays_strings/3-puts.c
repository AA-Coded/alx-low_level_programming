#include "main.h"
/**
 * _puts - Afunction that prints a string, followed by a newline to stdout
 * @str: pointer to char argument parameter
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
