#include<stdio.h>

int main(){


    int a;
    printf("enter number according week-days :");
    scanf("%d",&a);

    if(a == 1){

        printf("this is monday.");
    }

   else if(a == 2){

        printf("this is tuesday.");
    }

   else if(a == 3){

        printf("this is wednesday.");
    }

   else if(a == 4){

        printf("this is thursday.");
    }

   else if(a == 5){

        printf("this is friday.");
    }

   else if(a == 6){

        printf("this is saturday.");
    }

    else if(a == 7){

        printf("this is sunday.");
    }

    else{
        printf("invalid...");
    }
    

    return 0;
}