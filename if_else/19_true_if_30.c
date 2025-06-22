#include<stdio.h>
#include<stdbool.h>

int main(){

    int a,b;
    printf("enter number 1 :");
    scanf("%d",&a);

     printf("enter number 2 :");
    scanf("%d",&b);


    if( (a == 30 || b == 30) || (a + b == 30 ) ){

        int b_val = true;
        printf("return %d",b_val);
    }

    else{
        int b_val2 = false;
        printf("return %d",b_val2);
    }

    return 0;
}