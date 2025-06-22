#include<stdio.h>
int main(){

    char al;

    printf("enter character :");
    scanf("%c",&al);

    if((al == 'a' || al == 'e' || al == 'i' || al == 'o' || al == 'u') || (al == 'A' || al == 'E' || al == 'I' || al == 'O' || al == 'U')){

        printf("this is vowel.");

    } 
    else{
     
        printf("this is not vowel.");
    }

    return 0;
}