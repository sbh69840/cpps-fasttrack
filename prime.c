#include <stdio.h>
#include <stdlib.h>
void input(int *num){
	printf("Enter a positive number N");
	scanf("%d",num);
}
void print_primes(int num,int primes[],int *prime_count){
	int count  =0;
	if(num<2){
		printf("There are no prime numbers.");
		exit(0);
	}
	primes[count] = 2;
	count++;
	int i,j,is_prime;
	for(i=3;i<num;i+=2){
		is_prime=1;
		for(j=2;j<=(i/2);j++){
			if((i%j)==0){
				is_prime=0;
				break;
			}
		}
		if(is_prime==1){
			primes[count] = i;
			count++;
		}
	}
	*prime_count = count;
}
void output(int primes[],int prime_count){
	int i;
	printf("[");
	for(i=0;i<prime_count;i++){
		printf("%d, ",primes[i]);
	}
	printf("]");
}
void main(){
	int num;
	input(&num);
	int primes[num];
	int prime_count;
	print_primes(num,primes,&prime_count);
	output(primes,prime_count);
}



