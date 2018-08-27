#include <stdio.h>
#include <stdlib.h>
struct matrix_dim{
	int rows;
	int col;
};
void input_dim(struct matrix_dim *mat1,struct matrix_dim *mat2){
	printf("Enter the values of matrix 1 rows,cols");
        scanf("%d %d",&mat1->rows,&mat1->col);
        printf("Enter the values of matrix 2 rows,cols");
        scanf("%d %d",&mat2->rows,&mat2->col);
        if(mat1->col!=mat2->rows){
                printf("Invalid matrix dimensions.");
                exit(0);
        }

}
void input(struct matrix_dim mat1,struct matrix_dim mat2,float matrix1[mat1.rows][mat1.col],float matrix2[mat2.rows][mat2.col]){
	int i,j;
	for(i=0;i<mat1.rows;i++){
		for(j=0;j<mat1.col;j++){
			printf("Enter the value of matrix1[%d][%d]",i,j);
			scanf("%f",&matrix1[i][j]);
		}
	}
	for(i=0;i<mat2.rows;i++){
                for(j=0;j<mat2.col;j++){
                        printf("Enter the value of matrix2[%d][%d]",i,j);
                        scanf("%f",&matrix2[i][j]);
                }       
        } 
}
void multiply(struct matrix_dim mat1,struct matrix_dim mat2,float matrix_final[mat1.rows][mat2.col],float matrix1[mat1.rows][mat1.col],float matrix2[mat2.rows][mat2.col]){
	int i,j,k;
	float sum=0;
	for(i=0;i<mat1.rows;i++){
		for(j=0;j<mat2.col;j++){
			for(k=0;k<mat1.col;k++){
				sum = sum+matrix1[i][k]*matrix2[k][j];
			}
			matrix_final[i][j]=sum;
			sum=0;

		}
	}
}
void print_matrix(struct matrix_dim mat1,struct matrix_dim mat2,float matrix_final[mat1.rows][mat2.col]){
	int i,j;
	printf("Matrix final is :\n");
        for(i=0;i<mat1.rows;i++){
                for(j=0;j<mat2.col;j++){
                        printf(" %f ",matrix_final[i][j]);
                }
                printf("\n");
        }
}


void main(){
	struct matrix_dim mat1;
	struct matrix_dim mat2;
	input_dim(&mat1,&mat2);
	float matrix1[mat1.rows][mat1.col],matrix2[mat2.rows][mat2.col],matrix_final[mat1.rows][mat2.col];

	input(mat1,mat2,matrix1,matrix2);
	multiply(mat1,mat2,matrix_final,matrix1,matrix2);
	int i,j;
	printf("Matrix 1 is :\n");
	for(i=0;i<mat1.rows;i++){
                for(j=0;j<mat1.col;j++){
                        printf(" %f ",matrix1[i][j]);
                }
		printf("\n");
        }
	printf("Matrix 2 is :\n");
        for(i=0;i<mat2.rows;i++){
                for(j=0;j<mat2.col;j++){
                        printf(" %f ",matrix2[i][j]);
                }
                printf("\n");
        }
	print_matrix(mat1,mat2,matrix_final);


}

