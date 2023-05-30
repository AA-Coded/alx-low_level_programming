#include "main.h"
#include <string.h>
/**
 * _strlen - A function that returns length of a string
 * @s: string arguement parameter
 * Return: number of bytes in the string pointed to by s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	return(count);
}
