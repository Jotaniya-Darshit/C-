#include <stdio.h>
float convert(int c)
{
    int fahrenheit = (c * 9 / 5) + 32;
    return fahrenheit;
}
int main() 
{
  float celsius;

  printf("Enter temperature in Celsius = ");
  scanf("%f", &celsius);
  printf("Temperature in Fahrenheit = %.2f",convert(celsius));
}