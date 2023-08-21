#include "main.h"

/**
 *print_octal - prints octal numbers
 *@arg: argument list
 *
 *Return: number of printed charactes
 */

int print_octal(va_list arg)
{
	int cntr = 0, i;
	int *oct;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int tmp = num;

	cntr = get_size(num, 8);
	oct = malloc(cntr * sizeof(int));
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
