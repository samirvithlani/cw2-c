#include<stdio.h>
#include<string.h>

int main(){

    char name[30],name1[30];
    printf("\n enter name:");
    gets(name);
    printf("\n enter name1:");
    gets(name1);


    // it will return int
    int ans = strcmp(name,name1);

    if(ans ==0){

        printf("\n both string are same ::");
    }
    else{

        printf("\n both strings are diff");
    }



}
