#include<stdio.h>
int *max(int *a,int *b)
{
    if(*a<*b)
    {
        return b;
    }   
    else
    {
        return a;
    }
}
void main()
{
    int n1,n2;
    printf("Enter A = ");
    scanf("%d",&n1);
    printf("Enter B = ");
    scanf("%d",&n2);
    printf("Max = %d",*max(&n1,&n2));
}