#include<stdio.h>
int main()
{
    int a=10;
    char b='D';
    float pi=3.14;

    int *p1=&a;
    char *p2=&b;
    float *p3=&pi;

    printf("%p = %d\n",p1,*p1);
    printf("%u = %c\n",p2,*p2);
    printf("%x = %.2f\n",p3,*p3);
}