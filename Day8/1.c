#include<stdio.h>
int main()
    {
        int i = 1;
        int u;
        printf("Enter Number = ");
        scanf("%d",&u);

        do
        {
            printf("%d\n",i);
            i++;
        }while(i<=u);
    }