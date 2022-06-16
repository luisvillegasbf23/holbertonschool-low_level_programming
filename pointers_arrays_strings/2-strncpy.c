#include "main.h"
/**
 * *_strncpy - Write a function that copies a string.
 * @dest: Pointer
 * @src: Pointer
 * @n: Number
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i]; i++)
		dest[i]= src [i];
	return (dest);
}
