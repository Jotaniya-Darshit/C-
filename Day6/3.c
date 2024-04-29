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
        
        (a < b) 
            ? 
            ((a < c) ? ((a < d) ? printf("%d is Min",a) : printf("%d is Min",d)) : ((c < d) ? printf("%d is Min",c) : printf("%d is Min",d)))
            : 
            ((b < c) ? ((b < d) ? printf("%d is Min",b) : printf("%d is Min",d)) : ((c < d) ? printf("%d is Min",c) : printf("%d is Min",d)));

    }