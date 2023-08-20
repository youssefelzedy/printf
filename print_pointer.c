#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int print_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int x;
	int i;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	x = printf_hex_aux(a);
	return (x + 2);
}
