#include "main.h"

/**
 * main - The main function
 * Return: Always Return 0
 */

int main(void)
{
	int len;

	printf("Hi my name is %s\n", "youssef");
	_printf("Hi my name is %s\n", "youssef");
	_printf("Hi my name is %c\n", 'H');
	_printf("Hi my name is %d and %i \n", -45455, 455);
	_printf("Hi my name is %%\n");
	len = _printf("Hi my name is\n");
	_printf("Hi my name is %d\n", len);
	_printf("Hi my name is %u\n", 2808348671);
	_printf("Hi my name is %b\n", 7);
	_printf("Hi my name is %o\n", 457);
	printf("Hi my name is %o\n", 457);


    

	return (0);
}
