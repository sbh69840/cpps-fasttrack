#include <stdio.h>
void input_dim(int *l){
	printf("Enter the length of the array");
	scanf("%d",l);
}
void input(int l,float array[l]){
	for(int i=0;i<l;i++){
		printf("Enter the element array[%d]",i);
		scanf("%f",&array[i]);
	}
}
void selection_sort(int l,float array[l]){
	int pos,tmp,pos_ele;
	for(int i=0;i<(l-1);i++){
		pos = i;
		pos_ele = array[i];
		for(int j=i+1;j<(l);j++){
			if(pos_ele>array[j]){
				pos = j;
			}
		}
		if(pos!=i){
			tmp = array[i];
			array[i] = array[pos];
		        array[pos]=tmp;
		}
	}
}
void main(){
	int l;
	input_dim(&l);
	float array[l];
	input(l,array);
	selection_sort(l,array);
	printf("The sorted array is [");
	for(int i=0;i<l;i++){
		printf("%f, ",array[i]);
	}
	printf("]");
	printf("The maximum element is %f and minimum element is %f",array[l-1],array[0]);

}


