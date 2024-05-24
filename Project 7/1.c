#include<stdio.h>
int calculateSumOfSquares(int n) 
{
    int sum = 0,b;
    for (int i = 0; i <= n; i++) 
    {
        if(i%2==0)
        {   
            b=i*i;
            sum += b;
            //sum += i*i;
        }
    }
    return sum;
}
int main()
{
    int a;
    printf("Enter any number = ");
    scanf("%d",&a);
    printf("Sum of Even no Square 1 to %d = %d",a,calculateSumOfSquares(a));

}