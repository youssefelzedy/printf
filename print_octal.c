#include "main.h"

/**
 *print_octal - prints octal numbers
 *@arg: argument list
 *
 *Return: number of printed charactes
 */

int print_octal(va_list arg)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
    printf("ffffffff\n\n\n");
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
