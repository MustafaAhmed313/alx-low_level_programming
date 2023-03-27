#include "main.h"

/**
 * _strcpy - copy an array
 *
 * @dest: pointer to the destination array
 * @src: pointer to th source array
 *
 * Return: pointer of dest array
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
