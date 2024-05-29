#include<stdio.h>
int main()
{
    int s;
    printf("Enter size of array = ");
    scanf("%d",&s);
    int arr[s];
    // int arr[4]={1,2,3,4};

    for(int i=0;i<s;i++)
    {
        printf("Enter element arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int *p = arr;
    printf("\n ** Scale of Pointer **\n\n");
    for (int i = 0; i < s; i++)
    {
        printf("%u\t%d\n",p+i,*(p+i));
    }
    
}