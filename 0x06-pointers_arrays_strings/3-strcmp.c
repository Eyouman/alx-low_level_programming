#include "main.h"
/**
 * _strncpy - Compares pointers to two string.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative of the first unmatched charcters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched charcters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
