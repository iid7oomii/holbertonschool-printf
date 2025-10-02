#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for testing _printf
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    /* Test values */
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    /* Simple sentence */
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    /* Length test */
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    /* Negative numbers */
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    /* Unsigned numbers */
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    /* Octal */
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);

    /* Hexadecimal */
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    /* Characters */
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    /* Strings */
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    /* Pointers */
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    /* Percent sign */
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Binary (bonus) */
    _printf("Binary of 98:[%b]\n", 98);

    /* Unknown format character printed literally */
    _printf("Unknown:[%%r]\n");

    return (0);
}
