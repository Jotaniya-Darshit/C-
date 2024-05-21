#include<stdio.h>
int main()
{
    char str[100];
    int fre[256] = {0};
    printf("Enter Any String : ");
    scanf("%s",&str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        fre[str[i]]++;
    }
    printf("Character Frequency =\n");
    for (int i = 0; i < 256; i++) 
    {
        if (fre[i] != 0) 
        {
            printf("%c = %d\n", i, fre[i]);
        }
    }
}