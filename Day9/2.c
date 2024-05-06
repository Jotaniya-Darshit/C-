#include<stdio.h>
main()
    {   
        int u,stop;
        printf("Enter Any Number = ");
        scanf("%d",&u);
        printf("Enter Break Number = ");
        scanf("%d",&stop);
        int count = 0;
        for (int i = 1; i <= u; i++)
        {
           if(i % 2 ==0)
           {
                printf("%d\n",i);
                count++;
                if (count==stop)
                    {
                        break;
                    }
           }
        }
    }