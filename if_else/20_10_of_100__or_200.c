#include<stdio.h>
#include<stdbool.h>
  
//this program check if value is near or far from 100 and 200 . like (100-10) (100 +10) viceversa for 200 .
 
int main(){
    
    int a; 

    printf("enter number : ");
    scanf("%d",&a);

    if((a > 90 &&  a < 110 )  ||  (a > 190  && a < 210)){
        
        int b_val =true;
        printf("return %d",b_val);


    }

    else{
        int b1_val=false;
        printf("return %d",b1_val);
    }


  return 0;
}