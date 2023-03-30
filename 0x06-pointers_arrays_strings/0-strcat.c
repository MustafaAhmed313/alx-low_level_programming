#include "main.h"

/**
* _strcat - concate 2 strings
*
* @dest: dest array of characters
* @src: src array of characters
*
* Return: pointer of the concatenation string
*/

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		c1++;
	for (c2 = 0 ; src[c2] ; c2++)
		dest[c1++] = src[c2];
	return (dest);
}
