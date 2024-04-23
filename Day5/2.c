#include<stdio.h>
main(){
    int a;
    printf("Enter Any Number = ");
    scanf("%d",&a);

    if(a>=0)
        {printf("%d is Positive",a);}
    else if(a==0)
        {printf("%d is Neutral",a);}
    else
        {printf("%d is Negative",a);}
    
}