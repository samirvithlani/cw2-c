#include<stdio.h>

int main(){

    int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k,sum=0;

    printf("\n enter matrix 1 Data");

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("\t %d",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n enter matrix 2 Data");

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("\t %d",mat2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){

        for(k=0;k<3;k++){

            for(j=0;j<3;j++){

                sum = sum + mat1[i][j] * mat2[j][k];
                mat3[i][k] = sum;
            }
            sum =0;
        }
    }

        for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("\t %d",mat3[i][j]);
        }
        printf("\n");
    }





}
