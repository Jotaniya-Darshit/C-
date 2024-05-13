#include<stdio.h>
int main()
{   
    int a[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Value %d = ",i);
        scanf("%d",&a[i]);
    }
    int sum=0,avg;
    for (int j = 0; j <= 4; j++)
    {
        sum+=a[j];
    }
    avg=sum/5;
    printf("Average = %d\n",avg);
}