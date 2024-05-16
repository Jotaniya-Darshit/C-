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
            printf("Enter Element in Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    int max = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] > max)
            {
            max = arr[i][j];
            }
        }   
    }
    printf("Max Element In Array = %d", max);
}
