#include<stdio.h>

int main(){

    char value[50],temp;
    int len=0,i,j;

    printf("\n enter value ::");
    gets(value);

    for(i=0;value[i]!= '\0';i++){

        len++;
    }
    //len = 5
    j =len-1;
    //royal
    for(i=0;i<len/2;i++,j--){
        //i[0] = r
        //j[len-1] j[4] =l
        temp =value[i];
        value[i] = value[j];
        value[j] = temp;

    }

    printf("\n reverse value = %s",value);




}
