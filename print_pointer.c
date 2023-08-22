#include "main.h"


/**
 * print_hex_to_pointer - prints an hexgecimal number.
 * @num: the argument of the print_hex_to_pointer function.
 * Return: A total count of the characters printed.
 */

int print_hex_to_pointer(unsigned long int num)
{
	long int *hex;
	long cntr = 0, i;
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 16);
	hex = malloc((cntr + 1) * sizeof(unsigned long int));
	if (hex == NULL)
		return (-1);

	if (hex)
	{
		for (i = 0; i < cntr; i++)
		{
			hex[i] = temp % 16;
			temp /= 16;
		}

		for (i = cntr - 1; i >= 0; i--)
		{
			if (hex[i] > 9)
				hex[i] = hex[i] + 39;
			_putchar(hex[i] + '0');
		}

		free(hex);
		return (cntr);
	}

	return (0);
}

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
