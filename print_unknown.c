#include "main.h"

/**
 * p_unknown - prints unknown specifiers like %r.
 * @ch: char.
 * Return: A total count of the characters printed.
 */

int p_unknown(char ch)
{
	char pre = '%';

	if (ch == '\0')
		return (-1);
	_putchar(pre);
	_putchar(ch);
	return (2);
}
