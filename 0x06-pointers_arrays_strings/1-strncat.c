#include "main.h"

/**
 * _strncat - this function will concatenate n bytes from a string to another
 * @dest: this is destination string
 * @src: this is source string
 * @n: the number of bytes of str to concatenate
 *
 * Return: points to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
