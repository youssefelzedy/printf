#include "main.h"

/**
 * print_rev - prints an reversed string.
 * @arg: arguments.
 * Return: counter.
 */
int print_rev(va_list arg)
{
	int j = 0;
	int i;
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
		j++;
	for (int i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (j);

}
