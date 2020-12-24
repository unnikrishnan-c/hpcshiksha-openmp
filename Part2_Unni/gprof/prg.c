#include<stdio.h>
void fun1();
int  fun2() {
    printf("Inside fun2 \n");
        for(int i=0;i<100000000;i++);
	fun1();
    return 1;
}
static void fun3(){
    printf("Inside fun3()\n");
    for(int i=0;i<400000000;i++);
    return;
}
int main() {
    printf("Inside main()\n");
    for(int i=0;i<100000000;i++);
    fun2();
    fun3();
    return 0;
}

