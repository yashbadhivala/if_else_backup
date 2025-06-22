#include<stdio.h>

int main(){

    
    int a,b;

    printf("enter first number :");
    scanf("%d",&a);

    printf("enter second number :");
    scanf("%d",&b);

    int sum =a+b;

    if( (sum >= 10 && sum <=20) ){

            printf("sum is %d inclusive between 10 to 20.",sum);
    }

    else{
        printf("not inclusive...");
    }

    return 0;
}