#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: pointer variable (string arg)
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
} 
