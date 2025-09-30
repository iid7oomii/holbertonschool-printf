#include "main.h"
#include <stdarg.h>

static int _puts_nz(const char *s)
{
int count = 0;
if (!s)
s = "(null)";
while (*s)
{
if (_putchar(*s++) == -1)
return -1;
count++;
}
return count;
}

int _printf(const char *format, ...)
{
va_list ap;
int i = 0, count = 0;
if (!format)
return -1;
va_start(ap, format);
while (format[i])
{
if (format[i] != '%')
{
if (_putchar(format[i]) == -1)
{ count = -1; break; }
count++;
i++;
continue;
}
i++;
if (!format[i])
{ count = -1; break; }
if (format[i] == 'c')
{
int c = va_arg(ap, int);
if (_putchar((char)c) == -1)
{ count = -1; break; }
count++;
}
else if (format[i] == 's')
{
int added = _puts_nz(va_arg(ap, char *));
if (added == -1) { count = -1; break; }
count += added;
}
else if (format[i] == '%')
{
if (_putchar('%') == -1)
{ count = -1; break; }
count++;
}
else
{
if (_putchar('%') == -1 || _putchar(format[i]) == -1)
{ count = -1; break; }
count += 2;
}
i++;
}
va_end(ap);
return count;
}
