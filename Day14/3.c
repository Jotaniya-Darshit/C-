#include<stdio.h>
int main()
{
    int r,c;
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
        int sum=0;
        for (int j = 0; j < c; j++)
        {
            sum+=arr[i][j];
        }
        printf("Sum of Row[%d] = %d\n",i,sum);
    }
}