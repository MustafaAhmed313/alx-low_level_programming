#include "main.h"

/**
* isLower - check if c is a lowercase character
*
* @c: single character
*
* Return: 1 if c is lowercase and 0 otherwise
*/

int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * isDelimiter - check if c is a Delimiter
 *
 * @c: single character
 *
 * Return: 1 if is Delimiter and 0  otherwise
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0 ; i < 12 ; i++)
		if (c == delimiter[i])
			return (i);
	return (0);
}

/**
 * cap_string - capitalize any word in the string
 *
 * @s: string parameter
 *
 * Return: array of characters
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*S))
			foundDelimit = 1;
		else if (isLower(*S) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
