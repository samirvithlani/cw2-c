#include<stdio.h>

int main(){


    int a[3][3],sum=0;

    printf("\n pls enter array elemeents:::");
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            //0 0
            scanf("%d",&a[i][j]);

        }


    }


    for(int i=0;i<3;i++){

        sum = 0;
        for(int j=0;j<3;j++){

            //0 0
            printf(" %d [%d] [%d]",a[i][j],i,j);
            sum  = sum+a[i][j];

        }
        printf("  sum = %d",sum);
        printf("\n");

    }

    printf("\n sum = %d",sum);

}
