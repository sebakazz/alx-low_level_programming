#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This program displays the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
