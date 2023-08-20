#include "main.h"

/**
 *main - The main function
 *Return: Always Return 0
 */

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	addr = (void *) 0x7ffe637541f0;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int) INT_MAX + 1024;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unsigned hexadecimal:[%x, ]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, ]\n", ui, ui);
	_printf("bin:[%b]\n", 7);
	printf("bin:[%b]\n", 7);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

	return (0);
}
