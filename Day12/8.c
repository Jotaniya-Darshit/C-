#include<stdio.h>
int main()
{   
    int a[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Value %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("Reverse Array = \n");
    for (int j = 4; j >= 0; j--)
    {   
        printf("%d\n",a[j]);
    }
}