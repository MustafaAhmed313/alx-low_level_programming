#include "main.h"

/**
 * _strlen - return length of a string
 *
 * @s: pointer to a string
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int count;

	for (count = 0 ; *s != '\0' ; s++)
		count++;
	return (count);
}
