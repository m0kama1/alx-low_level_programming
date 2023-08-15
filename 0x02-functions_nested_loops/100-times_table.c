#include "main.h"
/**
 * print_times_table - prints the times table of the input,
 * starting with 0.
 * @n: the value of the times table to be printed.
 */
void print_times_table(int n)
{
int num, mult, prod;
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
for (mult = 0; mult <= n; mult++)
{
prod = num * mult;
if (mult != 0)
{
_putchar(',');
_putchar(' ');
}
if (prod <= 9 && mult != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (prod <= 99 && mult != 0)
{
_putchar(' ');
_putchar(' ');
}
if (prod >= 100)
_putchar((prod / 100) + '0');
if (prod >= 10)
_putchar(((prod / 10) % 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}


