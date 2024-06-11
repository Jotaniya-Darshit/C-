#include<stdio.h>
int *min(int *a,int *b)
{
    if(*a<*b)
    {
        return a;
    }   
    else
    {
        return b;
    }
}
int main()
{
    int n1,n2;
    printf("Enter A = ");
    scanf("%d",&n1);
    printf("Enter B = ");
    scanf("%d",&n2);
    printf("Min = %d",*min(&n1,&n2));
}