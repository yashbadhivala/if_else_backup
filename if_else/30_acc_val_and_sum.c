#include<stdio.h>

int main(){

    int ch,a,b,c,d,e;
    printf("enter choice 2 or 3 :");
    scanf("%d",&ch);

    if (ch==2)
    {
        printf("enter number 1 :");
        scanf("%d",&a);

        printf("enter number 2 :");
        scanf("%d",&b);

        printf("sum of two digits is %d",a+b);
    }

    else{
    
        printf("enter number 1 :");
        scanf("%d",&c);

        printf("enter number 2 :");
        scanf("%d",&d);

        printf("enter number 3 :");
        scanf("%d",&e);

        printf("sum of three digits is %d",c+d+e);
    }
    

    return 0;
}