#include<stdio.h>

int main(){

    int no1 = 10,no2 =20,max=0;

    if(no1>no2){

        max = no1;
    }
    else{

        max = no2;
    }


    //max = 20
    // 16 and 20 max = 20
    for(;;){

            // 20 % 16 ==0
            //21 32 % 16 == 0  32 % 20
            //33 80 % 16 80 % 20 == 0
        if(max% no1 ==0 && max % no2 == 0){

            printf("lcm = %d",max);
            break;
        }
        max++;
    }




return 0;
}
