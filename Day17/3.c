#include<stdio.h>
int divideNumbers(int a,int b)
{
    if(b==0 || a==0)
    {
        printf("Can't divide with 0\n");
    }
    int total = a / b;
    printf("Division = %d",total);
}
int main()
{
    int a,b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    divideNumbers(a,b);
}