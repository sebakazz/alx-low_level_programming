#include <stdio.h>
/**
 * main - main block
 * Description: The program displays the alphabet in both lowercase
 * and uppercase and a new line
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

	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
