#include<stdio.h>
int swap(int *a,int *b,int *c)
{
    int *t;
    *t=*a;
    *a=*b;
    *b=*c;
    *c=*t;
    printf("A=> %d \nB=> %d \nC=> %d",*a,*b,*c);
}
int main()
{
    int n1,n2,n3;
    printf("Enter A = ");
    scanf("%d",&n1);
    printf("Enter B = ");
    scanf("%d",&n2);
    printf("Enter C = ");
    scanf("%d",&n3);
    swap(&n1,&n2,&n3);
}