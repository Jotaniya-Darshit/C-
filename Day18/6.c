#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int s;
    printf("Enter any no. = ");
    scanf("%d",&s);
    printf("Square = %d",square(s));
}