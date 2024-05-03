#include <stdio.h>
main() 
    {
        int a;
        int b = 0;
        printf("Enter Number = ");
        scanf("%d", &a);

        while (a != 0) {
            a /= 10;
            b++;
        }
        printf("Total Digit = %d\n", b);
    }