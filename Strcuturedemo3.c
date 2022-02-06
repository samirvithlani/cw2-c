#include<stdio.h>
struct Student{

    int smarks[5];
    char sname[50];
    int total;
    float per;

}stu[3];
void addStudents(){

    for(int i=0;i<3;i++){

         printf("\n Enter %d Student Detail",i+1);
         printf("\n Enter Student Name");
         _flushall();
         gets(stu[i].sname);

         printf("\n Enter 5 subject marks of  student  %d",i+1);
         for(int j=0;j<5;j++){

            printf("\n Enter marks of %d subject",j+1);
            scanf("%d",&stu[i].smarks[j]);

         }
    }
}

void getHeighestMarks(){

        int temp;
        for(int i=0;i<3;i++){

            for(int j=i+1;j<3;j++){

                if(stu[i].total > stu[j].total){

                    temp  = stu[i].total;
                    stu[i].total = stu[j].total;
                    stu[j].total = temp;

                }

        }



    }
    printf("\n Heighest marks =%d",stu[2].total);

}
void getStudents(){

        for(int i=0;i<3;i++){

            printf("\n DETAIL OF %d student is",i+1);
            printf("\n Name of student =%s",stu[i].sname);
            printf("\n Marks of %s student",stu[i].sname);
            for(int j=0;j<5;j++){

                printf("\n marsk of %d subject  = %d",j+1,stu[i].smarks[j]);
                stu[i].total = stu[i].total + stu[i].smarks[j];
            }
            printf("\n Total marks %s student = %d",stu[i].sname,stu[i].total);
        }



}



int main(){


    addStudents();
    getStudents();
    getHeighestMarks();

}
