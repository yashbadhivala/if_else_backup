#include<stdio.h>

int main(){

    char ch;

    printf("enter character :");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z')){

        printf("character is uppercase.");
    }

    else{
        printf("character is lowercase.");

    }


    return 0;
}