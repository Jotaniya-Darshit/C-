#include<stdio.h>
int countlen(char a[])
{   
    int i=0;
    while (a[i] != NULL)
    {
        i++;
    }
    return i;    
}

int main()
{
    char n[50];
    printf("Enter your name = ");
    scanf("%s",&n);
    printf("Length = %d",countlen(n));
}