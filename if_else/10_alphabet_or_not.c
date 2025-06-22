#include<stdio.h>
int main(){

    char al;

    printf("enter character :");
    scanf("%c",&al);

    if((al == 'a' || al == 'z') ||(al == 'A' || al == 'Z')){

        printf("this is alphabet.");

    } 
    else{
     
        printf("this is not alphabet.");
    }

    return 0;
}