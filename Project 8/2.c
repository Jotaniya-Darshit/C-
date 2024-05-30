// #include<stdio.h>
// int main()
// {
//     int r,c;
//     printf("Enter row size = ");
//     scanf("%d",&r);
//     printf("Enter column size = ");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++)
//     {
//         for (int j=0;j<c;j++)
//         {
//            printf("Enter cube arr[%d][%d] = ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int *p[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             p[r][c]=&arr[i][j];
//             int cube=*p[i][j]**p[i][j]**p[i][j];
//             printf("%d ",cube);
//         }   
//         printf("\n");
//     }
// }
#include <stdio.h>
void cubes(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int cube = *(arr + i * c + j)**(arr + i * c + j)**(arr + i * c + j);
            printf("%d\t",cube);
        }
        printf("\n");
    }
}
int main()
{
    int r, c;
    printf("Enter row size = ");
    scanf("%d", &r);
    printf("Enter column size = ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter cube arr[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nCube Of Array \n");
    cubes(&arr[0][0],r,c);
}