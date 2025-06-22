#include<stdio.h>

int main(){

    int a,b,c;
    printf("enter number 1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);

    printf("enter number 3:");
    scanf("%d",&c);

    int sum =a+b+c;

    if((a==13) || (b==13) || (c==13)){

            int d =sum-13;
            printf("13 not counted... sum is %d",d);
    }

    else{

        printf("sum is %d",sum);
    }


    return 0;
}