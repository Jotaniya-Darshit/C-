#include<stdio.h>
main()
    {
        int a,b,c,d;

        printf("Enter Of a = ");
        scanf("%d",&a);
        printf("Enter Of b = ");
        scanf("%d",&b);
        printf("Enter Of c = ");
        scanf("%d",&c);
        printf("Enter Of d = ");
        scanf("%d",&d);
        
        (a > b) 
            ? 
            ((a > c) ? ((a > d) ? printf("%d is Max",a) : printf("%d is Max",d)) : ((c > d) ? printf("%d is Max",c) : printf("%d is Max",d)))
            : 
            ((b > c) ? ((b > d) ? printf("%d is Max",b) : printf("%d is Max",d)) : ((c > d) ? printf("%d is Max",c) : printf("%d is Max",d)));

    }