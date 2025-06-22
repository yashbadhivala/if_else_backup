#include<stdio.h>

int main(){

    int amt ,note;
    printf("enter amt :");
    scanf("%d",&note);

    if(amt >= 500){
        note = amt / 500;
        printf("500s note : %d\n",note);
        amt= amt -(note * 500);
    }

    if(amt >= 200){
        note = amt / 200;
        printf("200s note : %d\n",note);
        amt= amt -(note * 200);
    }

    if(amt >= 100){
        note = amt / 100;
        printf("100s note : %d\n",note);
        amt =amt -(note * 100);
    }

    if(amt >= 50){
        note = amt / 50;
        printf("50s note : %d\n",note);
        amt= amt -(note * 50);
    }

     if(amt >= 20){
        note = amt / 20;
        printf("20s note : %d\n",note);
        amt= amt -(note * 20);
    }

     if(amt >= 10){
        note = amt / 10;
        printf("10s note : %d\n",note);
        amt =amt -(note * 10);
    }

    if(amt >= 5){
        note = amt / 5;
        printf("5s note : %d\n",note);
        amt =amt -(note * 5);
    }

     if(amt >= 2){
        note = amt / 2;
        printf("2s note : %d\n",note);
        amt =amt -(note * 2);
    }

     if(amt >= 1){
        note = amt / 1;
        printf("1s note : %d\n",note);
        amt =amt -(note * 1);
    }

    
      


    return 0;
}