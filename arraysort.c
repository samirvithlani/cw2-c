#include<stdio.h>

int main(){

    int a[5],temp;

    printf("\n ENTER ELEMENTS of an array::");



    for(int i=0;i<5;i++){

        printf("\n enter %d element",i+1);
        scanf("%d",&a[i]);
    }

        //10 2 5 78 1
    for(int i=0;i<5;i++){
          /*
            a[0]=10
          */

        for(int j=0;j<5;j++){

            //i[0] = j[1]
            // 10 < 2 false
            // 10 < 5 false
            // 10 78 true
            // a[0] = 78 1 false
            //78 2 5 10 1
            //i[1] = 2
            //j[0] = 78
            //2 < 78 true
            //2 78 5 10 1
            //i[1] = 78
            //faslss
            //i[2] = 5
            //j[0] = 2
            // 5 < 2false
            // 78
            //2 5 78 10 1
            //i[3] = 10
            //false
            //2 5 10 78 1
            //

            if(a[i]<a[j]){

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }

    for(int i=0;i<5;i++){

        printf("\n i =%d",a[i]);
    }




return 0;
}
