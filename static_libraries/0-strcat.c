#include "main.h"
/**
 * *_strcat - This function appends the src string to the dest string,
 * @dest: Pointer
 * @src: Pointer
 * Return: Dest
 */
char *_strcat(char *dest, char *src)
{
	int i, strdest;

	for (strdest = 0; dest[strdest]; strdest++)
		;
	for (i = 0; src[i]; i++)
		dest[strdest + i] = src[i];
	dest[strdest + i] = '\0';
	return (dest);
}

