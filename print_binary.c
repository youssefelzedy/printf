#include "main.h"

/**
 * print_binary - to print binary from int
 * @arg: taking v_list
 * Return: A total count of the characters printed.
 */

int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i, cntr;
	char *binary;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	cntr = get_size(num, 2);
	binary = malloc(sizeof(char) * (cntr + 1));

	if (binary == NULL)
		return (-1);

	for (i = cntr - 1; i >= 0; i--)
	{
		binary[i] = (num & 1) + '0';
		num /= 2;
	}

	for (i = 0; i < cntr; i++)
	{
		_putchar(binary[i]);
	}

	free(binary);
	return (cntr);
}
