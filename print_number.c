#include "main.h"
#include <stdarg.h>

/**
 * print_number - prints an integer
 * @ap: argument list containing the integer
 * Return: number of characters printed, -1 on error
 */
int print_number(va_list ap)
{
	int n = va_arg(ap, int);
	unsigned int num, div = 1;
	int count = 0;
	char digit;

	if (n < 0)
	{
		if (_putchar('-') == -1)
			return (-1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		digit = (num / div) % 10 + '0';
		if (_putchar(digit) == -1)
			return (-1);
		count++;
		div /= 10;
	}
	return (count);
}
