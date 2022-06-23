#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Write a function that creates an array of chars
 * , and initializes it with a specific char.
 * @size: size
 * @c: char
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
