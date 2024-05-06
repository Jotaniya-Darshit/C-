#include<stdio.h>
main(){
    for (int i = 1; i <= 60; i++)
    {
        if (i % 6 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
}