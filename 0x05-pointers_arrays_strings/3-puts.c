#include "main.h"

/**
 * _puts - prints a sring
 * @str: string to printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
