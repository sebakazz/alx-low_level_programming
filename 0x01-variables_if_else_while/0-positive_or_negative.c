#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * This program assigns a random nuber to a variable called n and
 * determines whether the number is negative, positive or zero
 * Return: 0
 */
int main(void)
{
	int n; /* declaring the vairable n */

	srand(time(0)); /* function for generating random numbers */
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
