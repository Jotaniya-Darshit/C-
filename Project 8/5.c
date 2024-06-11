#include<stdio.h>
int cube(int a)
{
     return a*a*a;
}
int main()
{
    int n1;
    printf("Enter Number = ");
    scanf("%d",&n1);
    int *p=&n1;
    printf("Min = %d",cube(n1));
}   