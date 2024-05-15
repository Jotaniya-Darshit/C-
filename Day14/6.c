#include<stdio.h>
int main()
{
    int r,c;
    int sum=0;
    printf("Enter Row Size = ");
    scanf("%d",&r);
    printf("Enter Column Size = ");
    scanf("%d",&c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Element Array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");        
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%-3d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {   
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j]%2==1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("Sum of Odd Elements = %d\n",sum);
}