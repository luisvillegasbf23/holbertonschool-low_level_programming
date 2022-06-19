#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: Pointer
 * @size: number of matrix
 * Return: Always 0;
 */
void print_diagsums(int *a, int size)
{
	int i;
	int r1 = 0;
	int r2 = 0;

	for (i = 0; i <= (size * size); i++)
	{
		r1 += a[i];
		i = i + size;
	}

	for (i = size - 1; i < (size * size - 1); i--)
	{
		r2 += a[i];
		i = i + size - 1;
	}

	printf("%d, %d\n", r1, r2);
}
