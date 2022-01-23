#include<stdio.h>

int main(){

    char name[50];
    int i;
    printf("\n enter your name ::");
    gets(name);

    //apple APPLE
    //b B = 32
    //
    for(i=0;name[i]!='\0';i++){

        //name[i] =a = 97
        if(name[i]>=97 && name[i]<=122){

            name[i] = name[i]-32;
        }

    }

    printf("\n name in upper =%s",name);



}
