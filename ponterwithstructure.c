#include<stdio.h>

struct Subject{

    int sId;
    char sName[30];

};
int main(){


    //struct Subject sub;


    struct Subject sub,*s;
    s =&sub;

    printf("\n enter sid");
    scanf("%d",&sub.sId);

    printf("\n enter name");
    scanf("%s",sub.sName);

    printf("\n sid = %d",s->sId);
    printf("\n name = %s",s->sName);



}
