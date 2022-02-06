#include<stdio.h>

struct Student{

    int smarks[5];
    char sname[50];
    int total;
    float per;

}stu;

void addStudent(){

    printf("\n Enter Student Name");
    gets(stu.sname);

    printf("\n Enter 5 subject marks:");
    for(int i=0;i<5;i++){

        printf("\n Enter marks:");
        scanf("%d",&stu.smarks[i]);
    }

}

void getStudents(){

    printf("\n Name of student =%s",stu.sname);

    for(int i=0;i<5;i++){

        printf("\n Marks of Subject %d  = %d",i+1,stu.smarks[i]);
        stu.total = stu.total + stu.smarks[i];

    }

    printf("\n Total marks of %s = %d",stu.sname,stu.total);
    stu.per =stu.total/5;
    printf("\n PER of %s = %f",stu.sname,stu.per);


}

int main(){

    //scase

    addStudent();
    getStudents();


}
