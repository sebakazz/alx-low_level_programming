#include "main.h"

/**
 * reverse_array - this function reverses an array of integers
 * @a: the array to be reversed
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
