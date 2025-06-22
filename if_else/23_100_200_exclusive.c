#include<stdio.h>

int main(){

    int a,b;
    printf("enter value of first number :");
    scanf("%d",&a);

    printf("enter value of second number :");
    scanf("%d",&b);

    if ((a >= 0 && a <= 99) || (b >= 0 && b <= 99))
    {
        printf("number is exclusive between 100 to 200");
    }

    else{

        printf("not exclusive between 100 to 200");
    }
    


    return 0;
}
