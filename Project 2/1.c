#include <stdio.h>
main() 
{   
    int n;
    int a = 1;
    printf("Enter Number = ");
    scanf("%d",&n);
    do {
        if (a % 2 == 0) {
            printf("%d\n", a);
        }
        a += 3;
    } while (a <= n);

}