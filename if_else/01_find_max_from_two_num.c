#include<stdio.h>

int main(){
    
    int a,b;

    printf("enter number 1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);


    if(a>b){

        printf("number 1 is big.");
    }

    else if(b>a){

        printf("b is big.");
    }

    else{

        printf("both are equal.");
    }
        



    return 0;
}