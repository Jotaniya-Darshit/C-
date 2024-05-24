#include <stdio.h>
int calculateFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}
int main() 
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Factorial of %d is = %d",n,calculateFactorial(n));
    }
}