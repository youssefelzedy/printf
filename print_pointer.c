#include "main.h"


/**
 * print_hex_to_pointer - prints an hexgecimal number.
 * @num: the argument of the print_hex_to_pointer function.
 * Return: A total count of the characters printed.
 */

int print_hex_to_pointer(unsigned long int num)
{
	long int *hex;
	long int cntr = 0, i;
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num / 16 != 0)
	{
		num /= 16;
		cntr++;
	}
	cntr++;
	hex = malloc(sizeof(long int) * (cntr));
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
	void *ptr;
	char *str = "(nil)";
	unsigned long int val;
	int print_hex;
	int i;

	ptr = va_arg(arg, void *);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	val = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	print_hex = print_hex_to_pointer(val);
	return (val + 2);
}
