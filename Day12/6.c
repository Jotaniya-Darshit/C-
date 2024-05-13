#include<stdio.h>
int main()
{
    int a[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value %d = ", i);
        scanf("%d",&a[i]);
    }
    int max = 0;
    for(int i = 0; i <= 4; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    printf("Max = %d", max);
}