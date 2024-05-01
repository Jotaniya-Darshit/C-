#include<stdio.h>
main()
    {   
        int i = 1;
        int n;
        printf("Enter Number = ");
        scanf("%d",&n);
        while (i<=n)
        {
            printf("%d\n",n);
            n--;
        }
    }