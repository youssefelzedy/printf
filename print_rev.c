#include "main.h"

/**
 * print_rev - prints an reversed string.
 * @arg: arguments.
 * Return: the string.
 */
int print_rev(va_list arg)
{
	char *s = va_arg(arg, char *);
	int j = 0;
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[j] != '\0')
		j++;
	for (int i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (j);

}
