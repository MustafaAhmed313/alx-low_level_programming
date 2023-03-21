#include "main.h"
/**
 * _isalpha - return 0 if c is not alphabet, return 1 otherwise.
 *
 * @c: The character in ASCII code
 *
 * Return: always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
