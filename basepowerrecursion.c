#include<stdio.h>

int main(){

    int ans;
    ans = pow(2,5);
    printf("\n ans = %d",ans);

}

int pow(int base,int power){

    //5 true
    //4 true
    //3
    //2
    //1
    //0

    for(int i=1;i<pow;i++){

        ans =ans * base;
    }

    if(power!= 0){

        return (base * pow(base,power-1));

    }
    else{
        return ;
    }


}
