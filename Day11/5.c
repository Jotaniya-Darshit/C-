#include<stdio.h>
main()
{
    for(int i=1;i<=5;i++)
    {   
        for(int s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(int j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}