#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter num 1:");
    scanf("%d",&a);

    printf("enter num 2:");
    scanf("%d",&b);

    printf("enter num 3:");
    scanf("%d",&c);

    int sum= a+b+c;

    if((a != b && a != c)&&(b == c)){
        printf("%d",a);
    }

    else if((b != a && b != c)&&(a == c)){
        printf("%d",b);
    }

    else{

        printf("%d",c);
    }
        


    return 0;
}