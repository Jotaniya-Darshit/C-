#include<stdio.h>
main(){
    for(int i = 1 ; i <= 9 ; i++){
        for(int s = 1 ; s <= 9-i ; s++){
            printf(" ");
        }
        if(i % 2 == 1){
            for(int j = 1 ; j <=i ; j++){
            printf(" *");
            }
        }
        printf("\n");
    }
}