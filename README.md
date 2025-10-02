# C - _printf
![Programmer life](https://i.imgur.com/yS98Q2H.png)

**Authors:**  
Abdulrahman Alghamdi  
Dalal Saleh Alshamrani 

---

## About

This project is a simplified version of the C standard library `printf`.  
It allows you to print:

- Characters (`%c`)  
- Strings (`%s`)  
- Percent sign (`%%`)  
- Signed integers (`%d`, `%i`)  
- Unsigned integers (`%u`), octal (`%o`), hexadecimal (`%x`, `%X`)  
- Bonus: Binary (`%b`)  
- Pointers (`%p`)  

Basically, `_printf` is like `printf`, but cooler and lighter. 😎  

---

## Examples
![Programmer life](https://i.imgur.com/lYZbjyU.png)

```c
_printf("Hello, world!\n");
_printf("Character: %c, String: %s\n", 'A', "Test");
_printf("Progress: 100%% complete\n");
_printf("Number: %d\n", 12345);
_printf("Unsigned: %u, Octal: %o, Hex: %x, HEX: %X\n", 1024, 1024, 1024, 1024);
_printf("Binary of 98: %b\n", 98);
_printf("Pointer: %p\n", main);
_printf("Unknown specifier: %%r\n");

---

## Example output
Hello, world!
Character: A, String: Test
Progress: 100% complete
Number: 12345
Unsigned: 1024, Octal: 2000, Hex: 400, HEX: 400
Binary of 98: 1100010
Pointer: 0x563a1f3d4e60
Unknown specifier: %r

---

## How it works
1- _printf reads a format string.
2- Replaces each specifier with the value from the argument list.
3- Prints everything using _putchar.

---

## Compilation

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o my_printf
./my_printf

