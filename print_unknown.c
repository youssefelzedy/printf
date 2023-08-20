#include "main.h"

/**
 *unknown - prints unknown specifiers like %r
 *@ch: char
 *
 *Return: number of characters printed
 */

int unknown(char ch)
{
	char pre = '%';

	if (ch == '\0')
		return (-1);
	_putchar(pre);
	_putchar(ch);
	return (2);
}
