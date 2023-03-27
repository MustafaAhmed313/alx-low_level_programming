#include "main.h"

/**
 * _puts - print a string
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
