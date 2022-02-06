#include<stdio.h>

int getpower(int b,int p){
        //5 4 3 2 1 0
    //2
    if(p!=0)

        return (b * getpower(b,p-1));

    else
        return 1;


}

int main(){

    int x = getpower(2,5);
    printf("\n ans = %d",x);

}
