#include <stdio.h>
int main() 
{   
    int n;
    printf("Enter Array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        printf("Enter Element = ");
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    int sum = 0;
    float average;

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    average = sum / n;

    printf("Average = %.2f", average);
}