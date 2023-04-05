#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string
 * @accept: string
 *
 * Return: pointer p or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
