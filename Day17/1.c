#include<stdio.h>
int addNumbers(int a,int b)
{
    int total = a + b;
    printf("Addition = %d",total);
}
int main()
{
    int a,b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    addNumbers(a,b);
}