#include "main.h"

/**
 * _memcpy - copy bytes in amemory
 *
 * @dest: string
 * @src: string
 * @n: unsigned integer
 *
 * Return: string dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
