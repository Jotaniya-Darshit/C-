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
    int a,b,sumr=0,sumc=0;
    printf("Enter Row Number = ");
    scanf("%d",&a);
    int ar=a-1;
    for (int i = ar; i < r; i++)
    {
        if (i == ar+1)
        {
            break;
        }for (int j = 0; j < c; j++)
        {
            sumr+=arr[i][j];
        }
        printf("Sum of Row[%d] = %d\n",a,sumr);
    }
    
    printf("Enter Column Number = ");
    scanf("%d",&b);
    int bc=b-1;
    for (int i = 0; i < r; i++)
    {
        for (int j = bc; j < c; j++)
        {   
            if (j == bc+1)
            {
                break;
            }
            sumc+=arr[i][j];
        }
    }
    printf("Sum of Column[%d] = %d\n",b,sumc);
}