#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 *              excluding the letters 'q' and 'e',
 *              followed by a new line.
 *              Uses the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')        {
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
