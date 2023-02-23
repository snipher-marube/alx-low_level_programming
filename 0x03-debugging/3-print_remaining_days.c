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
    int total_days = 0;
    int remaining_days = 0;
    int is_leap_year = 0;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                is_leap_year = 1;
            }
        }
        else
        {
            is_leap_year = 1;
        }
    }

    switch (month)
    {
        case 1:
            total_days = 31;
            break;
        case 2:
            total_days = is_leap_year ? 29 : 28;
            break;
        case 3:
            total_days = 31 + 28 + is_leap_year;
            break;
        case 4:
            total_days = 31 + 28 + is_leap_year + 31;
            break;
        case 5:
            total_days = 31 + 28 + is_leap_year + 31 + 30;
            break;
        case 6:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31;
            break;
        case 7:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31 + 30;
            break;
        case 8:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31 + 30 + 31;
            break;
        case 9:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31 + 30 + 31 + 31;
            break;
        case 10:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            break;
        case 11:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            break;
        case 12:
            total_days = 31 + 28 + is_leap_year + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            break;
        default:
            break;
    }

    remaining_days = total_days - day;

    printf("Day of the year: %d\n", day + is_leap_year);
    printf("Remaining days: %d\n", remaining_days + is_leap_year);
}

