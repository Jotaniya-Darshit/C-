#include <stdio.h>
void swap(int *a, int *b) 
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main() 
{
    int x, y;
    printf("Enter first value = ");
    scanf("%d", &x);
    printf("Enter second value = ");
    scanf("%d", &y);
    printf("Before swapping =\n x = %d\n y = %d\n", x, y);

    swap(&x, &y);

    printf("\nAfter swapping =\n x = %d\n y = %d\n", x, y);
}