#include "main.h"
#include <stdarg.h>

/**
 * print_pointer - prints a pointer address in hexadecimal format
 * @ap: argument list containing the pointer
 *
 * Description:
 *   Handles NULL pointers as "(nil)"
 *   Converts pointer to hexadecimal string manually
 *   Prints each character using _putchar
 *
 * Return: number of characters printed, -1 on error
 */
int print_pointer(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	unsigned long addr;
	char hex[] = "0123456789abcdef";
	char buffer[20];
	int i = 0;
	int count = 0;

	if (!ptr)
		return (_printf("(nil)"));

	addr = (unsigned long)ptr;

	while (addr > 0)
	{
		buffer[i++] = hex[addr % 16];
		addr /= 16;
	}

	if (_putchar('0') == -1 || _putchar('x') == -1)
		return (-1);
	count += 2;

	while (--i >= 0)
	{
		if (_putchar(buffer[i]) == -1)
			return (-1);
		count++;
	}

	return (count);
}
