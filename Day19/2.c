#include<stdio.h>
int Fibonacci(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return (Fibonacci(n-1) + Fibonacci(n-2));
}
int main()
{   
    int a;
    printf("Enter any no = ");
    scanf("%d",&a);
    printf("%d",Fibonacci(a));
}
// #include <stdio.h>
// void fibonacci(int n, int a, int b) {
//     if (n > 0) {
//         printf("%d ", a);
//         fibonacci(n - 1, b, a + b);
//     }
// }
// main() {
//     int n;
//     printf("Enter the number of terms for Fibonacci series: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: ");
//     fibonacci(n,0,1);
// }