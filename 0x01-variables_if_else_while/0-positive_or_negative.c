#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * This function generates a random number, prints it, and determines whether
 * it's positive, negative, or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is", n);
if (n > 0)
{
printf(" positive");
}
else if (n < 0)
{
printf(" negative");
}
else
{
printf(" zero");
}
printf("\n");
return (0);
}
