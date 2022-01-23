#include<stdio.h>

int main(){

//ASSIC Values
// A ->65
//B 66
//Z
//a ->97
//z ->
//space  32

    char c='A';
    //char name[20]="royal Techno";
    char name[20];
    int i,count=0;
    printf("\n value of c =%d",c);

    printf("\n enter value of name ::");
    //getString
    gets(name);
    //scanf("%s",&name);

    /*
    printf("\n %c",name[0]);
    printf("\n %c",name[1]);
    printf("\n %c",name[2]);
    printf("\n %c",name[3]);
    printf("\n %c",name[4]);
    */

    //royal techno '\0' null char end of the string
    //Ahmedabad'\0'

    for(i=0;name[i]!= '\0';i++){

        printf("\n %c",name[i]);
        count++;
    }


    printf("\n");
    puts(name);
    //printf("\n value of name = %s",name);
    printf("\n no of char =%d",count);


}

