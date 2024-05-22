#include<stdio.h>
int multiplyNumbers(int a,int b)
{
    int total = a * b;
    printf("Multiplication = %d",total);
}
int main()
{
    int a,b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    multiplyNumbers(a,b);
}