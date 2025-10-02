#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @ap: argument list
 * Return: number of characters printed, -1 on error
 */
int print_binary(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int started = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (mask)
	{
		if (n & mask)
		{
			started = 1;
			if (_putchar('1') == -1)
				return (-1);
			count++;
		}
		else if (started)
		{
			if (_putchar('0') == -1)
				return (-1);
			count++;
		}
		mask >>= 1;
	}
	return (count);
}
