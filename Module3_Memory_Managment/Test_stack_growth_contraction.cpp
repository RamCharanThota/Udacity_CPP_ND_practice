/**
 * This program is a test to check and observe
 * stack memory grownth and contraction
*/
#include<stdio.h>

void MyFun(){
    int k=3;
    printf("3: %p \n",&k);
}

int main(){
    int a=1;
    printf("1: %p \n",&a);
    int b=2;
    printf("2: %p \n",&b);
    MyFun();
    
    int c=3;
    printf("2: %p \n",&c);
}