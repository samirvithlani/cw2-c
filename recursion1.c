#include<stdio.h>

void print(int n){

//n = 10

    if(n)
        print(n-1);
    else
            return;

    printf("\n %d",n);

}
int main(){

    print(10);

}
