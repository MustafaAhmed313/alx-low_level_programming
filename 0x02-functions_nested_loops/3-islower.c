#include "main.h"
/**
 * _islower - return 0 if c is not lowercase, return one otherwise.
 *
 * @c: The character in ASCII code
 *
 * Return: always 0 (Success)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
