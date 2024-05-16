#include<stdio.h>
main()
{
    int a;
    printf("Enter Size of 1D Array = ");
    scanf("%d",&a);

    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter Element arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<a;i++)
    {
        if(arr[i]<0)
        {
            printf("Negative Element In Array = %3d\n",arr[i]);
        }
    }
}