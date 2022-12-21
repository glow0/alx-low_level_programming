#include "main.h"

/**
 * _strcpy - Copy the contents of one to another variable
 * @dest: This is the destination
 * @src: This is the copy
 * Return: return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
