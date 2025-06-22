#include<stdio.h>

int main(){
    

int a ;

printf("enter number :");
scanf("%d",&a);

if(  (a % 3 == 0) || (a % 7 ==0)  ){
        printf("given number %d is multiple of 3 or 7",a);
}

else{
    printf("given number %d is not multiple of 3 or 7",a);
}
return 0;
}