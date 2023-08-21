#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @arg: the argument of the integer function..
 * Return: A total count of the characters printed.
 */

int print_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(arg, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int) p;
	_putchar('0');
	_putchar('x');
	b = print_hex_to_pointer(a);
	return (b + 2);
}
