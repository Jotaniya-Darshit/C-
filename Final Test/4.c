#include <stdio.h>
int LeapYear(int year) 
{
    if (year % 4 == 0) 
    {
        return 1;  
    } 
    else 
    {
        return 0;
    }
}
int main() 
{
    int y;
    printf("Enter a year = ");
    scanf("%d", &y);

    if (LeapYear(y)) 
    {
        printf("%d is a leap year\n", y);
    } 
    else 
    {
        printf("%d is not a leap year\n", y);
    }
}
