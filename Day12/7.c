#include<stdio.h>
int main()
{
    int a[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value %d = ", i);
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for(int i = 0; i <= 4; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    printf("Min = %d", min);
}