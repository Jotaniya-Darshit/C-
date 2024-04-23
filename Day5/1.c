#include<stdio.h>
main(){
    int a;
    int b;
    printf("Enter First Value = ");
    scanf("%d",&a);
    printf("Enter Second Value = ");
    scanf("%d",&b);

    if(a>b)
        printf("%d is Greater",a);
    else
        printf("%d is Greater",b);

}
