#include<stdio.h>
main()
{
    float a, Total_amount, surcharge;
    printf("Enter Electricity a = ");
    scanf("%f", &a);

    if (a <= 50)
    {
        Total_amount = a * 0.50;
    } 
    else if (a <= 150)
    {
        Total_amount = (50 * 0.50) + ((a - 50) * 0.75);
    }
    else if (a <= 250)
    {
        Total_amount = (50 * 0.50) + (100 * 0.75) + ((a - 150) * 1.20);
    }
    else
    {
        Total_amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((a - 250) * 1.50);
    }

    surcharge = Total_amount * 0.20;
    Total_amount += surcharge;
    printf("Total Electricity Bill = Rs. %.2f\n",Total_amount);
}