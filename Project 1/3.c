#include<stdio.h>
main()
    {
        int FV,SV;

        printf("Enter First Angle Of Triangle = ");
        scanf("%d",&FV);
        printf("Enter Second Angle Of Triangle = ");
        scanf("%d",&SV);

        int TV = 180-(FV+SV);

        printf("Your Third Angle Of Triangle = %d",TV);
    }