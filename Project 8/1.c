#include <stdio.h>
int Length(char *str) 
{
    int length = 0;
    while (*str != '\0') 
    {
        length++;
        str++;
    }
    return length;
}
int main() 
{
    char str[]="Hello World";
    int len = Length(str);
    printf("String = %s\n",str);
    printf("Length = %d\n", len);
}