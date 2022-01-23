#include<stdio.h>

int main(){

    int a[4][2],avg=0,max=0;

    printf("\n enter values...");
    for(int i=0;i<4;i++){

        for(int j=0;j<2;j++){

            scanf("%d",&a[i][j]);

        }

        printf("enter other day data::");
        printf("\n");
    }

    for(int i=0;i<4;i++){

        for(int j=0;j<1;j++){

            avg = (a[i][j]+a[i][j+1])/2;
            printf("\t %d",a[i][j]);

        }
        printf("avg =%d",avg);
        printf("\n");
    }






}



