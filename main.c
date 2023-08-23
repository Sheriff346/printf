#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * William and Sheriff
 * Return: Always 0
 */
int main(void)
{
int length;
int length2;
unsigned int ui;
void *addr;

ui = (unsigned int)INT_MAX + 1024;
length = _printf("Percent:[%%]\n");
length2 = printf("Percent:[%%]\n");
_printf("Length:[%d]\n", length);
printf("Length:[%d]\n", length2);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
length = _printf("Let's try to printf a simple sentence.\n");
length2 = printf("Let's try to printf a simple sentence.\n");
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", length, length);
printf("Length:[%d, %i]\n", length2, length2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'T');
printf("Character:[%c]\n", 'T');
_printf("String:[%s]\n", "Our first project !");
printf("String:[%s]\n", "Our first project !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
return (0);
}
