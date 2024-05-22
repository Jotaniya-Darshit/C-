#include<stdio.h>
void printTable()
{
    for (int i = 1; i <= 10; i++)
    {   
        int b = 5 * i;
        printf("5 * %d = %d\n",i,b);
    }
    
}
void main()
{
    printTable();
}