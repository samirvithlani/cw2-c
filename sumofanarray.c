#include<stdio.h>


int main(){

    //int a[5]={12,22,55,78,96};

    int a[5];

    /*
    a[0]=101;
    a[1]=102;
    a[2]=103;
    a[3]=104;
    a[4]=105;
    */

    printf("\n ENTER ELEMENTS OF AN ARRAY:");

        int i;
        int sum =0;
        for(i=0;i<5;i++){

            printf("\n PLS ENTER %d element",i+1);
            scanf("%d",&a[i]);
        }


        for(i=0;i<5;i++){

            sum = sum + a[i];
            printf("\n 1st element = %d",a[i]);
        }

        printf("\n sum =%d",sum);

    /*
    printf("\n  element = %d",a[1]);
    printf("\n  element = %d",a[2]);
    printf("\n  element = %d",a[3]);
    printf("\n  element = %d",a[4]);
    */

return 0;
}

