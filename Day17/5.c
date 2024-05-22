#include<stdio.h>
int calculateSquare(int a)
{
    int total = a*a;
    printf("Square = %d",total);
}
int main()
{
    int a;
    printf("Enter value of a = ");
    scanf("%d",&a);
    calculateSquare(a);
}