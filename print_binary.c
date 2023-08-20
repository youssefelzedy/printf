#include "main.h"

/*int print_binary(va_list arg)
{
    int number = va_arg(arg, int);
    int i, index = 0, binary[32];

    if (number == 0) {
        _putchar('0');
        return (1);
    }

    while (number > 0) {
        binary[index] = number % 2;
        number /= 2;
        index++;
    }

    for (i = index - 1; i >= 0; i--) {
        _putchar(binary[i] - '0');
    }
    return(index);
}*/

int print_binary(va_list arg) {
    unsigned int num = va_arg(arg, unsigned int);
    int i, size;
    char *binary;
    if (num == 0) {
        _putchar('0');
        return (1);
    }

    size = get_size(num, 2);
    binary = malloc(sizeof(char) * size + 1);

    if(binary == NULL)
        return (-1);

    for (i = size - 1; i >= 0; i--) {
        binary[i] = (num & 1) + '0';
        num >>= 1;
    }

    for (i = 0; i < size; i++) {
        _putchar(binary[i]);
    }
    free(binary);
    return (size);
}
