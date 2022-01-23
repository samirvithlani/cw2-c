#include<stdio.h>


int main(){



    int a[5];


    printf("\n ENTER ELEMENTS OF AN ARRAY:");

        int i;
        int sum =0;
        for(i=0;i<5;i++){

            printf("\n PLS ENTER %d element",i+1);
            scanf("%d",&a[i]);
        }

        int max = a[0];

        //10 5 7 87 96
        //max = 10

        for(i=0;i<5;i++){

        /*
            10 > 10
            max =10
            5 > 10
            max = 10
            7 > 10
            max = 10
            87 > 10
            max = 87
            96 > 87
            max = 96
        */

            if(a[i] > max){

                max =a[i];
            }
            printf("\n 1st element = %d",a[i]);
        }

        printf("\n max = %d",max);



return 0;
}

