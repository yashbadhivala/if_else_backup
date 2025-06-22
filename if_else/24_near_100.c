#include<stdio.h>
#include<stdbool.h>

int main(){

    int a,b,near,far;

    printf("enter number 1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);

    near = 100 - a;

    far = 100 - b;

    if( near < far ){

        printf("%d is near",a);

    }

    else if(a == b){

        int b_val=false;

        printf("return %d",b_val);
    }

    else{
        printf("%d is near",b);
    }


    return 0;
}