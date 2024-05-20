#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    printf("Enter Name = ");
    scanf("%s",&n);
    printf("In Uppercase = %s",strupr(n));
}