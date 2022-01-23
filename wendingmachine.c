#include<stdio.h>

int main(){

    int c100=0,c200=0,c500=0,c2000=0,c50=0,c20=0,c10=0,c5=0,c2=0,c1=0;

    int amount;
    printf("\n ENTER AMMOUNT :::");
    scanf("%d",&amount);

    while(amount>=2000){

        amount = amount - 2000;
        c2000++;
    }
    while(amount>=500){

        amount = amount -500;
        c500++;
    }
    while(amount>=200){

        amount = amount -200;
        c200++;
    }


    printf("\n user will get :::");
    printf("\n 2000 NOTE = %d",c2000);
    printf("\n 500 NOTE = %d",c500);
    printf("\n 200 NOTE = %d",c200);




}
