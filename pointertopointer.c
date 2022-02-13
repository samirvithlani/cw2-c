#include<stdio.h>

int main(){

    int var;
    int *ptr;
    int **pptr;

    var = 100;

    ptr = &var;
    pptr = &ptr;

    printf("\n value of var =%d",var);
    printf("\n value of var =%d",*ptr);
    printf("\n value of var =%d",**pptr);

}
