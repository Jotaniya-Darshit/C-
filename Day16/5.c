#include<stdio.h>
#include<string.h>
int main()
{
    char n1[50];
    char n2[50];
    printf("Enter First String = ");
    scanf("%s",&n1);
    printf("Enter Second String = ");
    scanf("%s",&n2);
    printf("Concated String = %s",strcat(n1,n2));    
    
}