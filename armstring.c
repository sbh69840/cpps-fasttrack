#include <stdio.h>
#include <math.h>
void input(int *n){
	printf("Enter the positive integer.");
	scanf("%d",n);
}
void is_armstrong(int n){
        int n_sub = n;
        int num_digits=log10(n)+1;
        int digits[num_digits];
        for(int i=0;i<num_digits;i++){
                digits[i]=(n%10)*(n%10)*(n%10);
                n/=10;
        }
        int arm_digit = 0;
        for(int i=0;i<num_digits;i++){
                arm_digit = arm_digit+digits[i];
        }
	if(arm_digit==n_sub){
		printf("Yes, it is a arstrong number. %d %d",n_sub,arm_digit);
	}else{
		printf("NO, it is not a armstrong number. %d %d",n_sub,arm_digit);
	}

}
void main(){
        int n;
        input(&n);
        is_armstrong(n);
}
