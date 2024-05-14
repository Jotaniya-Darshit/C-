#include<stdio.h>
main()
{
    int u,count=0;
    printf("Enter Size of Array (Character) = ");
    scanf("%d",&u);
    char arr[u];
    for(int i = 0;i < u;i++)
    {
        printf("Enter Character Of arr[%d] = ",i);
        scanf(" %c",&arr[i]);
    }
    for(int i = 0;i < u;i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            count++;
        }        
    }
    printf("Number of Vowel In Character = %d",count);
}