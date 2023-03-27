#include "main.h"

/**
 * puts2 - print every characters of string starting by first char
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
