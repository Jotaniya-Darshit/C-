#include <stdio.h>
main() {
    int n, a, b, sum;
    printf("Enter Number = ");
    scanf("%d", &n);

    b = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    a = n;
    sum = a + b;
    printf("Sum = %d\n", sum);

}
