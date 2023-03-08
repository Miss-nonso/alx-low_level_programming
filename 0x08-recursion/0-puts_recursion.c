#include "main.h"

/**
 * puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	puts_recursion(s + 1);
}
