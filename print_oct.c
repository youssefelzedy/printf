#include "main.h"

/**
 * print_octal - prints octal numbers
 * @arg: the argument of the integer function.
 * Return: A total count of the characters printed.
 */

int print_octal(va_list arg)
{
	int cntr = 0, i;
	int *oct;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int tmp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 8);
	oct = malloc(cntr * sizeof(int));
	if (oct == NULL)
		return (-1);
	if (oct)
	{
		for (i = 0; i < cntr; i++)
		{
			oct[i] = tmp % 8;
			tmp /= 8;
		}

		for (i = cntr - 1; i >= 0; i--)
		{
			_putchar(oct[i] + '0');
		}

		free(oct);
		return (cntr);
	}

	return (0);
}
