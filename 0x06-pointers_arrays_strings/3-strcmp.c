#include "main.h"

/**
* _strcmp - compare with two strings
*
* @s1: string 1
* @s2: string 2
*
* Return: return singed number to compare the strings
*/

int _strcmp(char *s1, char *s2)
{
	int sum = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			sum = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (sum);
}
