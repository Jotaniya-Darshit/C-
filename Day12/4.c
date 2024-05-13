#include<stdio.h>
int main()
{   
    int a[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Value %d = ",i);
        scanf("%d",&a[i]);
    }
    for (int j = 0; j <= 4; j++)
    {
        if (a[j] % 2==1)
        {
            printf("Odd = %d\n",a[j]);
        } 
    }
}