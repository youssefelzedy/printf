#include "main.h"

/**
 *print_hex_to_pointer - prints an hexgecimal number.
 *@num: the argument of the print_hex function.
 *Return: counter.
 */
int print_hex_to_pointer(unsigned long int num)
{
	long int i;
	long int *arr;
	long int cntr = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		cntr++;
	}

	cntr++;
	arr = malloc(cntr * sizeof(long int));

	for (i = 0; i < cntr; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}

	for (i = cntr - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}

	free(arr);
	return (cntr);
}
