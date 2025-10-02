#include "main.h"

/**
 * convert_to_base - converts a number to a string in a given base
 * @n: the number to convert
 * @buf: buffer to store converted digits
 * @digits: possible digits to use
 * @base: the base (10, 8, 16)
 * Return: number of digits stored in buf
 */
static int convert_to_base(unsigned int n, char *buf, char *digits, int base)
{
	int i = 0;

	if (n == 0)
	{
		buf[i++] = '0';
		return (i);
	}

	while (n > 0)
	{
		buf[i++] = digits[n % base];
		n /= base;
	}
	return (i);
}

/**
 * print_buf_reverse - prints a buffer in reverse order
 * @buf: the buffer
 * @len: length of the buffer
 * Return: number of characters printed, -1 on error
 */
static int print_buf_reverse(char *buf, int len)
{
	int count = 0;

	while (--len >= 0)
	{
		if (_putchar(buf[len]) == -1)
			return (-1);
		count++;
	}
	return (count);
}

/**
 * print_unsigned - prints unsigned numbers according to spec
 * @ap: argument list
 * @spec: conversion specifier (u, o, x, X)
 * Return: number of characters printed, -1 on error
 */
int print_unsigned(va_list ap, char spec)
{
	unsigned int n = va_arg(ap, unsigned int);
	char buf[32];
	char *digits;
	int base, len;

	if (spec == 'u')
	{
		base = 10;
		digits = "0123456789";
	}
	else if (spec == 'o')
	{
		base = 8;
		digits = "01234567";
	}
	else if (spec == 'x')
	{
		base = 16;
		digits = "0123456789abcdef";
	}
	else /* 'X' */
	{
		base = 16;
		digits = "0123456789ABCDEF";
	}

	len = convert_to_base(n, buf, digits, base);
	return (print_buf_reverse(buf, len));
}
