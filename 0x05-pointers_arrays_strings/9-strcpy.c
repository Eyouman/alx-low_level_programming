#include "main.h"

/**
 * _strcpy - cppies the string pointed to by src
 * @dest: destination
 * @stc: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(stc + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
