#include<stdio.h>

int main(){
    
    int a;

    printf("enter number :");
    scanf("%d",&a);

    


    if(a % 5 == 0  && a % 11 == 0){

        printf("number is divisible by 5 and 11.");
    }

    else{

        printf("number not divisible by 5 and 11.");
    }
        



    return 0;
}