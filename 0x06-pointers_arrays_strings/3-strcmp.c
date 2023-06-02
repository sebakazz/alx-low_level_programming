#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: this is the destination string
 * @src: the source string
 * @n: for the number of bytes to copy
 *
 * Return: this points to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
