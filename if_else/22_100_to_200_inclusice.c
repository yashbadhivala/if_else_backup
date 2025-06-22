#include<stdio.h>

int main(){

    int a,b;
    printf("enter value of first number :");
    scanf("%d",&a);

    printf("enter value of second number :");
    scanf("%d",&b);

    if ((a >= 100 && a <= 200) || (b >= 100 && b <= 200))
    {
        printf("number is inclusive between 100 to 200");
    }

    else{

        printf("not inclusive between 100 to 200");
    }
    


    return 0;
}
