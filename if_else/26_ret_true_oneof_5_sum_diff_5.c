#include<stdio.h>
#include<stdbool.h>

int main(){

    int a,b,sum,diff;

    printf("enter number 1:");
    scanf("%d",&a);

    printf("enter number 2:");
    scanf("%d",&b);

    sum = a + b;

    diff = a - b;

    if((a == 5 ) || (sum == 5) || (diff == 5)){
        int b_val=true;
        printf("return %d",b_val);
    }

    else{

        int b_val1=false;
        printf("return %d",b_val1);
        
    }

    return 0;
}