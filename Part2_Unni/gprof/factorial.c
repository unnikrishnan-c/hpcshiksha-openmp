#include<stdio.h>
#include<unistd.h>
int fact(int n){
	sleep(1);
	if(n<=1)return 1;
	else return fact(n-1)*n;
}
int main(){
	int x=fact (5);
	return 1;
}
