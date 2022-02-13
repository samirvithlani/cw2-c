#include<stdio.h>

int main(){

    int a[5];
    int *p[5];

    a[0] = 100;
    a[1] = 200;
    a[2] = 300;
    a[3] = 400;
    a[4] = 500;

    for(int i=0;i<5;i++){

        printf("\n  = %d",a[i]);
        p[i] = &a[i];
    }

    for(int i=0;i<5;i++){

        printf("\n  = %d",*p[i]);

    }







}
