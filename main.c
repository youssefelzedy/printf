#include "main.h"

int main(void)
{
    int len;

    printf("Hi my name is %s\n", "youssef");
    _printf("Hi my name is %s\n", "youssef");
    _printf("Hi my name is %c\n", 'H');
    _printf("Hi my name is %d and %i \n", -45455,455);
    _printf("Hi my name is %%\n");
    len = _printf("Hi my name is\n");
    _printf("Hi my name is %d\n", len);
    _printf("Hi my name is %u\n", 2808348671);
    _printf("Hi my name is %b\n", 7);

    return (0);
}
