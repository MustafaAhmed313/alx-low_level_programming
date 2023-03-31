#include "main.h"

/**
* _strncpy - copy n source bytes in destination array
*
* @dest: dest array of characters
* @src: src array of characters
* @n: number of bytes concated in the string
*
* Return: ointer of dest array of characters
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c1;

	for (c1 = 0 ; c1 < n && src[c1] != '\0' ; c1++)
		dest[c1] = src[c1];
	while (c1 < n)
		dest[c1++] = '\0';
	return (dest);
}
