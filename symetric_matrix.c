#include <stdio.h>
void input_dims(int *m,int *n){
    printf("Enter the dimensions of matrix");
    scanf("%d %d",m,n);
}
void input(int m,int n,float matrix[m][n]){
    printf("Enter the values of the matrix");
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the values of matrix[%d][%d]",i,j);
            scanf("%f",&matrix[i][j]);
        }
    }
}
void is_symmetric(int m,int n,float matrix[m][n],float mat_trans[m][n],int *result){
    int i,j,k,l;
    float tmp[m],tmp1[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                mat_trans[k][i]=matrix[i][k];
            }
            
            
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(mat_trans[i][j]==matrix[i][j]){
               *result = 0; 
            }
            else{
                *result = -1;
                break;
            }
            if(result==-1){
                break;
            }
        }
    }
}
void main(){
    int m,n;
    input_dims(&m,&n);
    float matrix[m][n],mat_trans[m][n];
    input(m,n,matrix);
    int i,j;
    printf("Real matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%f ",matrix[i][j]);
        }
        printf("\n");
    }
    int result;
    is_symmetric(m,n,matrix,mat_trans,&result);
    
    printf("Transpose matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%f ",mat_trans[i][j]);
        }
        printf("\n");
    }
    if(result==0){
        printf("THe matrix is a symmetric matrix");
    }
    else{
        printf("The matrix is not a symmetric matrix");
    }
    
}


