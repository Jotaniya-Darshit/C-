#include<stdio.h>
main()
{
    int u,sum=0;
    printf("Enter Size of Array = ");
    scanf("%d",&u);
    int arr[u];
    for(int i = 0;i < u;i++)
    {
        printf("Enter element arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\nSum of all elements = %d",sum);
}