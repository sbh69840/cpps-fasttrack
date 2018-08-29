#include <stdio.h>
#include <stdlib.h>
void input_dim(int *m,int *n){
	printf("Enter the dimensions of matrix");
	scanf("%d %d",m,n);
	if(*m!=*n){
		printf("Required a square matrix");
		exit(0);
	}
}
void input_matrix(int m,int n,float matrix[m][n]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter the element matrix[%d][%d]",i,j);
			scanf("%f",&matrix[i][j]);
		}
	}
}
void print_diagonal(int m,int n,float matrix[m][n]){
	for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
			if(i==j){
                        printf("%f ",matrix[i][j]);
			}
                        
                }       
        }  
}
void main(){
	int m,n;
	input_dim(&m,&n);
	float matrix[m][n];
	input_matrix(m,n,matrix);
	print_diagonal(m,n,matrix);
}
