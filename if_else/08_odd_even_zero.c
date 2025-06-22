#include<stdio.h>

int main(){
    
    int a;

    printf("enter number :");
    scanf("%d",&a);

    if (a == 0)
    {

        printf("number is zero.");
    }


    

    else if(a % 2 == 1){
        printf("number is odd.");
    }



    else if(a % 2 ==0){

        printf("number is even.");
    }

     else{

            printf("invalid");
    }



    return 0;
}