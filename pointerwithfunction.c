//function call by value...

#include<stdio.h>

void swap(int a,int b){

    int c;
    c = a;
    a = b;
    b = c;

    printf("\n\n value of a inside swap function =%d",a);
    printf("\n value of b inside swap function =%d",b);

    printf("\n\n add of a inside swap function =%u",&a);
    printf("\n add of b inside swap function =%u",&b);


}

int main(){

    int a = 10,b=20;
    printf("\n value of a before swap inside main function =%d",a);
    printf("\n value of b before swap inside mian function =%d",b);

    printf("\n Add of a before swap inside main function =%u",&a);
    printf("\n Add of b before swap inside mian function =%u",&b);
    swap(a,b);


    printf("\n value of a after swap inside main function =%d",a);
    printf("\n value of b after swap inside mian function =%d",b);

    printf("\n add of a after swap inside main function =%u",&a);
    printf("\n add of b after swap inside mian function =%u",&b);

}
