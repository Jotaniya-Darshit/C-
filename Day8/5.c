#include<stdio.h>
int main()
    {
        int sum = 0;
        int u;
        printf("Enter Number = ");
        scanf("%d",&u);

        for(int i=1;i<=u;i++)
        {
           sum = sum + i; 
        }
        printf("%d\n",sum);
    }