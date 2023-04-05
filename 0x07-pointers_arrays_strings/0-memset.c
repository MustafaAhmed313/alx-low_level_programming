#include "main.h"

/**
 * _memset - fill memory with consecutive bytes
 *
 * @s: string
 * @b: character byte
 * @n: unsigned integer
 *
 * Return: string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
