#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		x--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
