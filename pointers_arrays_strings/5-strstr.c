#include "main.h"
#include <stddef.h>
/**
 * *_strstr - Write a function that locates a substring.
 * @haystack: Pointer
 * @needle: Pointer
 * Return: s
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	
	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (haystack[j] == needle[i])
			{
				return(&needle[i]);
			}
		}
	}
	return(NULL);
}
