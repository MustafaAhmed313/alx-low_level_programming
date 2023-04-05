#include "main.h"

/**
 * _strchr - copy memory area
 *
 * @s: string
 * @c: byte character
 *
 * Return: string dest
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
