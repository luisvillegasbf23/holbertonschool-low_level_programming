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

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0] )
		{
			for(j= 0; needle[j]; j++)
			{
				if(needle[0] == '\0')
					return (haystack);
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
