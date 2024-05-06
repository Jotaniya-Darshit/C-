#include <stdio.h>
main() {
    int sum = 0,a,b;
    printf("Enter Number = ");
    scanf("%d",&a);
    printf("Enter Number To Sum = ");
    scanf("%d",&b);
    for (int i = 1; i <= a; i++) 
    {
        printf("%d\n",i);
        sum += i;        
        if (sum > b) 
        {
            break;
        }
    }
    printf("Sum = %d\n", sum);
}
