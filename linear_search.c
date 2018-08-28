#include <stdio.h>
void input_param(int *l,float *search){
	printf("Enter the length of array and the element to be searched");
	scanf("%d %f",l,search);
}
void input(int l,float array[l]){
	int i;
	printf("Enter the array elements");
	for(i=0;i<l;i++){
		printf("Enter the array[%d] element",i);
		scanf("%f",&array[i]);
	}
}
void linear_search(int l,float array[l],float search){
	int i;
	for(i=0;i<l;i++){
		if(array[i]==search){
			printf("The element to be searched is the %dth element in the array",i+1);
			break;
		}
		if(i==l){
			printf("The element was not found in the array");
		}
	}
}
void main(){
	int l;
	float search;
	input_param(&l,&search);
	float array[l];
	input(l,array);
	linear_search(l,array,search);
}

