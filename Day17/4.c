#include<stdio.h>
int calculateCube(int a)
{
    int total = a*a*a;
    printf("Cube = %d",total);
}
int main()
{
    int a;
    printf("Enter value of a = ");
    scanf("%d",&a);
    calculateCube(a);
}