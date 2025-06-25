#include<stdio.h>

int main(){

    float unit,sr,bill;

    printf("enter number of unit :");
    scanf("%f",&unit);

    if (unit <= 50){
        bill=unit * 0.5;
    }

    else if (unit <= 150){
        bill=25 +(unit - 50)* 0.75;
    }

    else if (unit <= 250){
        bill=100 +(unit - 150)* 1.20;
    }

    else if(unit>=250){
        bill = 220 + (unit-250)*1.5;
    }

    sr=bill * 0.20;

    printf("total bill is %f rupees",bill+sr);

    
    return 0;
}
