#include <stdio.h>
void input(int *n,int *r){
	printf("Enter the values of n and r");
	scanf("%d %d",n,r);
}
void factorial(int num,int *fact){
	int i;
	*fact = 1;
	for(i=1;i<=num;i++){
		*fact =  *fact*i;
	}
		
	
}
void npr(int n,int r){
	int n_fact;
	factorial(n,&n_fact);
	int n_r_fact;
	factorial((n-r),&n_r_fact);
	printf("npr value for n = %d and r = %d is =  %d",n,r,(n_fact/n_r_fact));
}
void ncr(int n,int r){
	int n_fact;
	factorial(n,&n_fact);
	int r_fact;
	factorial(r,&r_fact);
	int n_r_fact;
	factorial((n-r),&n_r_fact);
	printf("\nncr value for n = %d and r = %d is = %d ",n,r,(n_fact/(n_r_fact*r_fact)));
}
void main(){
	int n,r;
	input(&n,&r);
	npr(n,r);
	ncr(n,r);
}
