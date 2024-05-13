#include<stdio.h>
int main()
{   
    int a[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Value %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("Square Of Each Element = \n");
    for (int j = 0; j <= 4; j++)
    {
        printf("%d\n",a[j]*a[j]);
    }
}