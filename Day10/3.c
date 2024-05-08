#include<stdio.h>
main()
    {
        for(int i = 6; i >= 1; i--)
        {
            for (int j = 6; j >= i; j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }