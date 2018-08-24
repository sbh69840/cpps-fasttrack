#include <stdio.h>
void input(int *rows){
	printf("enter number of rows.");
	scanf("%d",rows);
}
void print_triangle(int rows){
	int i,white_space,j;
	for(i=0;i<rows;i++){
		white_space=(rows)-(i+1);
		printf("%*s",white_space,"");
		for(j=0;j<(2*(i+1)-1);j++){
			printf("*");
		}
		printf("\n");
	}
}
void main(){
	int rows;
	input(&rows);
	print_triangle(rows);

}


