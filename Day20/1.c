#include<stdio.h>
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("A=> %d , B=> %d",a,b);
}
int main()
{
    int n1,n2;
    printf("Enter A = ");
    scanf("%d",&n1);
    printf("Enter B = ");
    scanf("%d",&n2);
    swap(n1,n2);
}