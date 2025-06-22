#include<stdio.h>

int main(){

    int a,b;

    printf("enter number :");
    scanf("%d",&a);

    if(a>0){
        printf("%d",(a-(2*a)));
    }

    else if(a<0){ //-1
        printf("%d",(a * (-1)));

    }

    return 0;

}