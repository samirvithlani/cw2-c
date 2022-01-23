#include<stdio.h>
#include<string.h>

int main(){

    char name[30];
    printf("\n enter name:");
    gets(name);
    strrev(name);

    printf("\n rev name =%s",name);


}
