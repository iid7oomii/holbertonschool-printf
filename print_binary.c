#include "main.h"
#include <stdarg.h>

int print_binary(va_list ap)
{
    unsigned int n = va_arg(ap, unsigned int);
    unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
    int count = 0, started = 0;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    while (mask > 0)
    {
        if (n & mask)
        {
            _putchar('1');
            count++;
            started = 1;
        }
        else if (started)
        {
            _putchar('0');
            count++;
        }
        mask >>= 1;
    }

    return (count);
}
