#include<stdio.h>


//without return type with arguments / parameters...
void sum(int a,int b){

    ///a b c are local variable of sum function
    int c =0;
    c = a + b;
    printf("\n sum = %d",c);

}
void div(float a,float b){


    float c =  a / b;
    printf("\n div =%f",c);
}

int main(){

    //local variable.... of main function...
    int no1,no2;
    printf("\n enter value of a");
    scanf("%d",&no1);
    printf("\n enter value of b");
    scanf("%d",&no2);
    sum(no1,no2);
    ///printf("\n a = %d",a);

    div(12.5,2);


return 0;
}
