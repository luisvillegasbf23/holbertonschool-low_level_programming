#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: Pointer
 * @b: Pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;

}
