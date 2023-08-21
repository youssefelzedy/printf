#include "main.h"

/**
 *print_hex - prints an hexgecimal number.
 *@arg: the argument of the print_hex function.
 *Return: counter.
 */

int print_hex(va_list arg)
{
	long int i;
	long int *hex;
	long int cntr = 0;
	unsigned long int num = va_arg(arg, unsigned long int);
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 16);
	hex = malloc(cntr * sizeof(long int));
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
