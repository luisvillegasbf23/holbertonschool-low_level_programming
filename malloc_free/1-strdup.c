#include "main.h"
/**
 * *_strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: pointer
 * Return: new pointer
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == NULL)
		return (NULL);
	copy = malloc(strlen(str) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
