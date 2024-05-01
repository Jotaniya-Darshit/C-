#include<stdio.h>
main()
    {
        int a;
        int b;
        printf("Enter First value = ");
        scanf("%d",&a);
        printf("Enter Second value = ");
        scanf("%d",&b);

        while (a <= b)
        {
            printf("%d\n",a);
            a+=4;
        }
        
    }