#include<stdio.h>
int main()
{
    int a=10;
    char b='D';
    float pi=3.14;

    int *p1=&a;
    char *p2=&b;
    float *p3=&pi;

    printf("address = %p \t value = %d\n",p1,*p1);
    printf("address = %u \t value = %c\n",p2,*p2);
    printf("address = %x \t value = %.2f\n",p3,*p3);
}