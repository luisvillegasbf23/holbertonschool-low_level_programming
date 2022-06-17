#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: Pointer
 * @c: Character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < c && s[i] ; i++)
		;
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
		return NULL;
}
