#include<stdio.h>
int main(){

    int a;

    printf("enter year :");
    scanf("%d",&a);

    if(a % 4 == 0){

        printf("year is leap year.");

    } 
    else{
     
        printf("year is not leap year.");
    }

    return 0;
}