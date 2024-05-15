#include<stdio.h>
int main()
{
    int r,c;
    int sum1=0,sum2=0,sum3=0;
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
            if (i == j)
            {
                sum1+=arr[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++) {
        sum2+= arr[i][c - 1 - i];
    }
    sum3=sum1+sum2;
    printf("Anti-Diagonal & Diagonal Sum =  %d ", sum3);
}