#include<stdio.h>
main()
    {
        int BaseSalary;
        int HRA,DA,TA,Total;
        float PerHRA,PerDA,PerTA;
        printf("Enter Your Based Salary = ");
        scanf("%d",&BaseSalary);
        printf("Enter Your HRA = ");
        scanf("%d",&HRA);
        printf("Enter Your DA = ");
        scanf("%d",&DA);
        printf("Enter Your TA = ");
        scanf("%d",&TA);

        PerHRA = HRA*BaseSalary/100;
        PerDA = DA*BaseSalary/100;
        PerTA = TA*BaseSalary/100;

        Total=BaseSalary+PerHRA+PerDA+PerTA;

        printf("Your Gross Salary = %d",Total);
    }