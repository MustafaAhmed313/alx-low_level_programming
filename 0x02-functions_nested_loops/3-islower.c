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
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
