#include <stdio.h>

int main() 
{
    int num;
    int factorial = 1;
    printf("Enter an integer = ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Given Number is Negative\n");
    } 
    else 
    {
        for (int i = 1; i <= num; i++) 
        {
            factorial *= i;
        }
        printf("\nFactorial of %d is: %d\n", num, factorial);
    }
}