#include<stdio.h>
main()
    {
        int Celsius;
        float Fahrenheit;
        printf("Enater temperature Celsius = ");
        scanf("%d",&Celsius);
        Fahrenheit = ((Celsius*9)/5)+32;
        printf("The temperature in Fahrenheit = %.1fF",Fahrenheit);
    }