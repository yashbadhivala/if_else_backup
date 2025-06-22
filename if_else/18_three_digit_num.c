#include<stdio.h>

int main(){

    int a;
    printf("enter number :");
    scanf("%d",&a);

    if(a > 99  &&  a < 1000){

        printf("entered nuber is three digit.");
    }

    else{
        printf("not three digit.");
    }
    
    return 0;
}