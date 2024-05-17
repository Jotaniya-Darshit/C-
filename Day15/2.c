#include<stdio.h>
main()
{
    char ch[] = "HELLO WORLD";
    
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (ch[i] >= 'A' && ch[i]<='Z')
        {
            ch[i] += 32;
            printf("%c",ch[i]);
        }
    }
}