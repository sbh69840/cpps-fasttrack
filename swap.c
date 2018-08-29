#include <stdio.h>
void input(int *m,int *n){
	printf("Enter two numbers");
	scanf("%d %d",m,n);
}
void swap(int *m,int *n){
	int tmp;
	tmp = *m;
	*m = *n;
	*n = tmp;
}
void main(){
	int m,n;
	input(&m,&n);
	swap(&m,&n);
	printf("The swapped numbers m = %d and n = %d",m,n);
}
