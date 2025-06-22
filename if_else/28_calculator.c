#include<stdio.h>

int main(){

    int a,b;
    char ch;

    printf("enter character : ");
    scanf("%c",&ch);

    printf("enter number 1 : ");
    scanf("%d",&a);

    printf("enter number 2 : ");
    scanf("%d",&b);

    if (ch == '+')
    {
        printf("addition is : %d",a-b);
    }

    if (ch == '-')
    {
        printf("substraction is : %d",a-b);
    }

    if (ch == '*')
    {
        printf("multiplication is : %d",a*b);
    }

    if (ch == '/')
    {
        printf("division is : %d",a/b);
    }

    else if (ch == '%')
    {
        printf("modulus is : %d",a%b);
    }

    else{
        printf("invalid...");
    }
    


    return 0;
}