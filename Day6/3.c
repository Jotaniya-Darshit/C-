#include<stdio.h>
main()
    {
        int a,b,c,d,min;

        printf("Enter Of a = ");
        scanf("%d",&a);
        printf("Enter Of b = ");
        scanf("%d",&b);
        printf("Enter Of d = ");
        scanf("%d",&c);
        printf("Enter Of d = ");
        scanf("%d",&d);
        
        min = (a < b) 
            ? 
            ((a < c) ? ((a < d) ? a : d) : ((c < d) ? c : d))
            : 
            ((b < c) ? ((b < d) ? b : d) : ((c < d) ? c : d));

        printf("%d is Min",min);
    }