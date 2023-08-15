#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Determines if a number is positive, negative, or zero
 * @i: The integer to be checked
 *
 * This function generates a random number, prints it, and determines whether
 * it's positive, negative, or zero.
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf(" positive");
}
else if (i < 0)
{
printf(" negative");
}
else
{
printf(" zero");
}
printf("\n");
}
