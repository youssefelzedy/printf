#include "main.h"

/**
 * print_binary - to print binary from int
 * @arg: taking v_list
 * Return: A total count of the characters printed.
 */

int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i, size;
	char *binary;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	size = get_size(num, 2);
	binary = malloc(sizeof(char) * size + 1);

	if (binary == NULL)
		return (-1);

	for (i = size - 1; i >= 0; i--)
	{
		binary[i] = (num & 1) + '0';
		num >>= 1;
	}

	for (i = 0; i < size; i++)
	{
		_putchar(binary[i]);
	}

	free(binary);
	return (size);
}
