#include<stdio.h>
main()
{
    char ch[] = "hello world";
    
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (ch[i] >= 'a' && ch[i]<='z')
        {
            ch[i] -= 32;
            printf("%c",ch[i]);
        }
    }
}
