#include<stdio.h>

//int i = 0;i<10;i++

int count =0;
void print(int n){
    // n = 10

    //0 --> falase
    //1  --->true

    //10
    //9 // 8 // 7 // 6 //0
    count++;

    if(n){

        printf("\n inside if...");
        print(n-1);
    }
    else{
        return;
    }

    // 10 9 8 7 6 5 4 3 2 1
    printf("-------");
    printf("no = %d\n",n);



}
int main(){

    print(10);
    printf("count = %d",count);
}
