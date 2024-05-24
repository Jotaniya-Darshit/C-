#include<stdio.h>
int calculateArea(int l,int w)
{
    return l*w;
}
int main()
{
    int len,wid;
    printf("Enter Length = ");
    scanf("%d",&len);
    printf("Enter Width = ");
    scanf("%d",&wid);
    printf("Area Of Rectangle = %d",calculateArea(len,wid));
}