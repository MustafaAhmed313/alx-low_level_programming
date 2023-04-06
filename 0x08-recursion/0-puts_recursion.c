#include "main.h"

/**
 * _puts_recursion - print a string in a recursive way
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
