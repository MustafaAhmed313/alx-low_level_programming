#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase.
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	for (char c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
