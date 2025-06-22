#include<stdio.h>

int main(){

    float e,m,sc,h,c,sum,res;
    float total = 500 ;

    printf("enter marks of english :");
    scanf("%f",&e);

    printf("enter marks of mathematic :");
    scanf("%f",&m);

    printf("enter marks of science :");
    scanf("%f",&sc);

    printf("enter marks of history :");
    scanf("%f",&h);

    printf("enter marks of computer :");
    scanf("%f",&c);

    sum = e + m + sc + h + c;

    res = (100 * sum) / total ;

    if(res >= 90){
        printf("grade A+ with total marks %f",sum);
    }

    else if(res >= 80){
        printf("grade A with total marks %f",sum);
    }

    else if(res >= 70){
        printf("grade B with total marks %f",sum);
    }

    else if(res >= 60){
        printf("grade C with total marks %f",sum);
    }

    else if(res >= 40){
        printf("grade D with total marks %f",sum);
    }

    else if(res<40){
        printf("fail with %f",sum);
    }

    else{

        printf("invalid...");
    }

    



    return 0;
}
