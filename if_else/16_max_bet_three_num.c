#include<stdio.h>

int main(){

    int a,b,c;
    printf("enter no.1 :");
    scanf("%d",&a);

    printf("enter no.2 :");
    scanf("%d",&b);

    printf("enter no.3 :");
    scanf("%d",&c);

    if(  (a>b) && (a>c)   ){
        printf("no.1 is big.");
    }

    else if(  (b>a) && (b>c)   ){
        printf("no.2 is big.");
    }

    else if(  (c>a) && (c>b)   ){
        printf("no. 3 is big.");
    }

    else{

        printf("all are same.");
    }
    


    return 0;
}
