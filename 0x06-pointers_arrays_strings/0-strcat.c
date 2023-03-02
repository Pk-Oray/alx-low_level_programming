#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, const char *src)
{
	char *p = dest;

	while (*p != '\0')

	{
		p++;
	}
	while (*src != '\0')
	{
	*p++ = *src++;
	}
	*p = ('\0');

	return (dest);
}
