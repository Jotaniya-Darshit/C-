#include<stdio.h>
main()
    {   
        int start,end,stop;
        printf("Enter Start Number = ");
        scanf("%d",&start);
        printf("Enter End Number = ");
        scanf("%d",&end);
        printf("Enter Stop Number = ");
        scanf("%d",&stop);
        int count = 0;
        for (int i = start; i <= end; i++) {
        if (i == stop) {
            continue; 
        }
        if (i % 2 == 0) {
            printf("%d\n",i);
        }
    }
}