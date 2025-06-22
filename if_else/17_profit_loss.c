#include<stdio.h>

int main(){

    float b_price , s_price;
    printf("enter base price :");
    scanf("%f",&b_price);

    printf("enter sell price :");
    scanf("%f",&s_price);



    if(s_price > b_price){

        printf("you are in profit with %f",s_price-b_price);

    }

    else if(b_price > s_price){

        printf("you are in loss with %f",b_price-s_price);

    }

    else{

        printf("no profit ,  no loss");
    }

    
    

    return 0;
}