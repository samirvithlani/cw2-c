#include<stdio.h>
#include<string.h>

int main(){

    char name[30],name1[30];
    printf("\n enter name:");
    gets(name);

    strcpy(name1,name);


    printf("\n rev name =%s",name);
    printf("\n rev name =%s",name1);


}

