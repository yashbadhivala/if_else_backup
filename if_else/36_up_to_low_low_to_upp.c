#include<stdio.h>

int main(){

    char ch;
    printf("enter alphabet :");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
            printf("uppercase to lowercase is %c",ch);
    }

    else if(ch >= 'a' && ch <= 'z'){
            ch = ch - 32;
            printf("lowercase to uppercase is %c",ch);
    }

    else{

        printf("invalid...");
    }


return 0;

}