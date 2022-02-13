#include<stdio.h>


void demo(){

    printf("\n Demo called....");
}
void demo2(){

    printf("\n Demo 2 called....");
}
int main(){


    void(*func_ptr)();
    void(*func_ptr1)();
    func_ptr = demo;
    func_ptr1 = func_ptr;
    printf("\n address of demo =%u",func_ptr);
    printf("\n address of demo =%u",func_ptr1);

}
