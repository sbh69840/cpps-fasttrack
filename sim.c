#include <stdio.h>
void swap(int *a,int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
	

void main(){
	int a=10,b=20;
	swap(&a,&b);
	printf("%d %d",a,b);
}
