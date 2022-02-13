#include<stdio.h>

int * sum(){

    int a=10;
    printf("\n add of a =%u",&a);


    return a;
}
int main(){

        //NULL pointer
        int *p;
        p = sum();
        printf("\n add of p =%u",*p);
        printf("\n sum =%d",p);

        // address...
        int *x=NULL;

}
