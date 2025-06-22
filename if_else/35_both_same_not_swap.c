#include<stdio.h>

int main(){

    int a,b;

    printf("enter number 1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);

    if(a != b){

        int a,b,c;

        c = a ;
        a = b ;
        b = c;

        printf("after swap a is %d b is %d",a,b);


    }
    else if(a == b){
        printf("both are same.");

    }

    else{

        printf("invalid.");
    }
    return 0;
}