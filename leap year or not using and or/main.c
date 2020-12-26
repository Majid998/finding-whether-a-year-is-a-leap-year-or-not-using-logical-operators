/* Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical
operators && and ||.
Author Majid Mujahid Hussain Dated 25/December/2020*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Hello world!\n");
    printf("Please enter the year: \n");
    scanf("%d", &year);

    //calculating if the year is leap year or not
    if( ( year%400 == 0) || (year%100 != 0 && year%4 == 0))
    {
        printf("The year '%d' is a leap year",year);
    }
    else
    {
        printf("The year '%d' is not a leap year", year);
    }
    return 0;
}
