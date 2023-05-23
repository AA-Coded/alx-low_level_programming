#include "main.h"
#include <unistd.h>
/**
 * main - Check description
 * Description: It prints '_putchar' followed by a newline
 * Return: 0
 */
int main(void)
{
	const char *message = "_putchar\n";

	write(1, message, 9);
	return (0);
}
