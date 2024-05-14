#include<stdio.h>
main()
{
    int u,sum=0,avg;
    printf("Enter Size of Array = ");
    scanf("%d",&u);
    int arr[u];
    for(int i = 0;i < u;i++)
    {
        printf("Enter element arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/u;
    printf("Average = %d",avg);
}