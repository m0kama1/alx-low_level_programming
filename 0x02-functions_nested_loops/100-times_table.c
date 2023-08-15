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
_putchar('0');
for (mult = 0; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 99)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 010) + '0');
_putchar(((prod / 10) % 10 + '0');
}
else if (prod <= 99 && mult >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}


