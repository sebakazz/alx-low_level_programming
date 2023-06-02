#include "main.h"

/**
 * _strcat - this function will concatenate two strings
 * @dest: string that will be appended to
 * @src: string to add
 *
 * Return: points to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
