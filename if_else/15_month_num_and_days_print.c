#include<stdio.h>

int main(){

    int num;
    printf("enter month number :");
    scanf("%d",&num);

    if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 9 || num == 11){

        printf("month has 31 days.");

    }

    else if (num == 2){

        printf("month has 28 days.");

    }

    else if (num == 4 || num == 6 || num == 10 || num == 12){

        printf("month has 30 days.");

    }

    else{

        printf("invalid....");
    }
    


    return 0;
}