#include<stdio.h>
main()
{
    int a;
    printf("Enter Number = ");
    scanf("%d",&a);

    (a%2==0) ? printf("%d is Even",a) : printf("%d is Odd",a);
}