#include "main.h"
#include <stdio.h>
/**
 * print_array -function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer
 * @n: number of elements
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n")
}
