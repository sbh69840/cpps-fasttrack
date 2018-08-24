#include <stdio.h>
void input(int *rows){
	printf("enter number of rows.");
	scanf("%d",rows);
}
/*
print_triangle receives 1 parameter:
INPUT PARAMETERS rows: no. of rows of triangle
OUTPUT PARAMETERS printf: prints the triangle
RETURN PARAMETERS : doesn't return anything.
Note: It will print a triangle with equal sides of n number of rows. 
*/
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


