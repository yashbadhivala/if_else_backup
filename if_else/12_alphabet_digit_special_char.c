#include <stdio.h>

int main() {
    char ch;

    
    printf("enter character: ");
    scanf("%c", &ch);

   
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("this is alphabet.");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("this is digit.");
    }
    else {
        printf("this is special character.");
    }

    return 0;
}
