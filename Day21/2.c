#include<stdio.h>
int main()
{
    int s;
    printf("Enter size of array = ");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
    {
        printf("Enter element arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int *p[s];
    printf("\n** Array of Pointer **\n\n");
    for (int i = 0; i < s; i++)
    {
        p[i]=&arr[i];
        printf("%u\t%d\n",p[i],*p[i]);
    }
    
}