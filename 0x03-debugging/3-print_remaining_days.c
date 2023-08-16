#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
    int is_leap_year = 0;

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        is_leap_year = 1;
    }

    // Update days in February for leap year
    if (is_leap_year && month == 2 && day == 29)
    {
        day = 60; // Leap day is considered day 60 in a leap year
    }

    // Handle invalid date (February 29 in non-leap year)
    if (!is_leap_year && month == 2 && day == 29)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    // Calculate remaining days
    int remaining_days = is_leap_year ? 366 - day : 365 - day;

    // Print results
    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", remaining_days);
}
