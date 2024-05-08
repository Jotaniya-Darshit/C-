#include<stdio.h>
main(){
    int changer = 70;
    for (char i = 65; i <= 70; i++)
    {
        for (int j = changer--; j >= 65; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}