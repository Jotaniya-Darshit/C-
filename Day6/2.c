#include<stdio.h>
main()
    {
        int a,b,c,d;

        printf("Enter 1 For English \n");
        printf("Enter 2 For Hindi \n");
        printf("Enter 3 For Gujarati \n");
        printf("Enter Your Choice = \n");
        scanf("%d",&a);

        switch(a)
        {
        case 1:
        printf("\nPress 1 for Internet Recharge");
        printf("\nPress 2 for Top-up Recharge");
        printf("\nPress 3 for Special Recharge");
        printf("\nEnter Your Choice = ");
        scanf("%d",&b);
        switch (b)
        {
        case 1:
        printf("\nYou have successfully done Internet Recharge.");
        break;
        case 2:
        printf("\nYou have successfully done Top-up Recharge.");
        break;
        case 3:
        printf("\nYou have successfully done Special Recharge.");
        break;
        
        default:
        printf("Invaild Choice");
        break;
        }
            break;
        
        case 2:
        printf("\nInternet Recharge ke liye 1 dabaiye");
        printf("\nTop-up Recharge ke liye 2 dabaiye");
        printf("\nSpecial Recharge ke liye 3 dabaiye");
        printf("\nEnter Your Choice = ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
        break;
        case 2:
        printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
        break;
        case 3:
        printf("\nAapne safaltapurvak Special Recharge kar liya he.");
        break;
        
        default:
        printf("Invaild Choice");
        break;
        }
            break;

        case 3:
        printf("\nInternet Recharge mate 1 dabavo");
        printf("\nTop-up Recharge mate 2 dabavo");
        printf("\nSpecial Recharge mate 3 dabavo");
        printf("\nEnter Your Choice = ");
        scanf("%d",&d);
        switch (d)
        {
        case 1:
        printf("\nTame safaltapurvak Internet Recharge karyu chhe.");
        break;
        case 2:
        printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
        break;
        case 3:
        printf("\nTame safaltapurvak Special Recharge karyu chhe.");
        break;
        
        default:
        printf("Invaild Choice");
        break;
        }
            break;
        
        default:
        printf("Invaild Choice");
            break;
        }
    }