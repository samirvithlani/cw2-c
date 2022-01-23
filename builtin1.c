#include<stdio.h>
#include<string.h>

int main(){

    char name[30],name1[30],surname[30] ="abc";
    int len=0;
    printf("\n enter name:");
    gets(name);

    strcpy(name1,name);


    printf("\n rev name =%s",name);
    printf("\n rev name =%s",name1);

    strupr(name);
    printf("\n UPPER name =%s",name);

    strlwr(name);
    printf("\n lower name =%s",name);

    len = strlen(name);
    printf("\n len =%d",len);

    strcat(name,surname);
    printf("\n cat function =%s",name);
    //strcpy
    //strcat
    //strlen
    //strrev
    //strlwr
    //strupr
    //strcpm

    //"hello good morning how are you" //no of space find...
    //buitl menu driven


}

