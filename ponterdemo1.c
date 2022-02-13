#include<stdio.h>



int main(){

        int a =10;
        int b;
        int *p;
        //a = 10 b = 10;
        //value of a copied to b variable...
        b =a;
        //we ar copying address of a to p
        p = &a;


        printf("\n value of a = %d",a);
        printf("\n address of a =%u",&a);

        printf("\n value of b = %d",b);
        printf("\n address of b =%u",&b);

        printf("\n value of p =%d",*p);
        printf("\n address of p =%u",p);



}
