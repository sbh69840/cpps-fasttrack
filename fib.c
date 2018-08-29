#include <stdio.h>
void input(int *n){
	printf("ENter the total number of fibonacci numbers.");
	scanf("%d",n);
}
void fib(int n){
	int count =0;
	int i,fib;
	int f1 =0;
	int f2 = 1;
	printf("%d ",f1);
	printf("%d ",f2);
	while(count<(n-2)){
		fib = f1+f2;
		f1 = f2;
		f2 = fib;
		printf("%d ",fib);
		count++;
	}
}
void main(){
	int n;
	input(&n);
	fib(n);
}
		

