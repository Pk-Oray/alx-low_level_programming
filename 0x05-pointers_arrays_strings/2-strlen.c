#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t lenght = 0;
	while (*str++)
		lenght++;
	return (lenght);
}
