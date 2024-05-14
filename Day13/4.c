#include<stdio.h>
main()
{
    int u;
    printf("Enter Size of Array (Character) = ");
    scanf("%d",&u);
    char arr[u];
    for(int i = 0;i < u;i++)
    {
        printf("Enter Character Of arr[%d] = ",i);
        scanf(" %c",&arr[i]);
    }
    for(int i = 0;i < u;i++)
    {
        printf("\n%c",arr[i]);      
    }
}