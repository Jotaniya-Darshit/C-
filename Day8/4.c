#include<stdio.h>
int main()
    {
        int fac = 1;
        int u;
        printf("Enter Number = ");
        scanf("%d",&u);

        for(int i=1;i<=u;i++)
        {
           fac = fac * i; 
        }
        printf("%d\n",fac);
    }