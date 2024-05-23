#include<stdio.h>
int sum(int arr[])
{
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[5]={10,20,30,40,50};
    printf("Sum = %d",sum(arr));
}