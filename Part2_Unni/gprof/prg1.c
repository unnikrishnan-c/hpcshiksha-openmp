#include<stdio.h>
int fun1(){
    printf("Inside fun1()\n");
    for(int i=0;i<200000000;i++);
    return 1 ;
}

