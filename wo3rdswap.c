#include<stdio.h>

int main(){

    int a =10,b=20;

    /*
        //a =30
    a = a + b;
        //b = 10 30 -20
    b = a -b;
     //a = 20 30 -10
    a =a -b;
    */

    printf("\n value of a = %d \n value of b = %d",a,b);

      //a =  10 * 20 = 200
    a = a *b;
        //b = 10 200 / 20
    b = a / b;
        // 200 / 10  20
    a = a /b;
    printf("\n value of a = %d \n value of b = %d",a,b);

}
