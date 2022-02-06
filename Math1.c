#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){

    int a =10;
    if(a==10){

            printf("\n inside if..");
            //exit(0);
            //return;
    }
    else{

        printf("\n programme continue....");
    }

    //int float
    // double sqrt(double x)

    int ans = sqrt(100);
    printf("\n sqrt = %d",ans);

    //double pow(double a,double b)

    int p = pow(2,5);
    printf("\n power ans =%d",p);

    //double modf(double x,*int);

    //int x =modf(10,2);
    //printf("\n ans = %d",x);
    //double exp(double x)

    double x = exp(1);
    printf("\n ans = %lf",x);

    //double cos(double x)

    double y = cos(50);
    printf("\n ans = %lf",y);
    //tanh

    double ret = tanh(0.5);
    printf("\n ret =%lf",ret);

    //double log(double x)
    printf("\n ans  %lf",log10(10.5));

    //double floor(double x)
    printf("\n ans  %lf",floor(11));

    //double fmod(double x,double y)
    printf("\n rem = %lf",fmod(11,3));


}
