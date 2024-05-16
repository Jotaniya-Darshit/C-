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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%3d",arr[i][j]);
        }   
        printf("\n");
    }
    printf("\n Transpose Matrix = \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%3d",arr[j][i]);
        }   
        printf("\n");
    }
}
