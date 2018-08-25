#include <stdio.h>
void input(float a[]){
    printf("Enter three numbers.");
    scanf("%f %f %f",&a[0],&a[1],&a[2]);

}
void greatest_integer(float *great,float a[]){
    if(a[0]>a[1]&&a[1]>a[2]){
        *great= a[0];
    }
    else if (a[1]>a[0]&&a[0]>a[2]){
        *great = a[1];
    }
    else{
        *great = a[2];
    }
}
void output(float great){
    printf("The greatest integer is = %f",great);
}
void main(){
    float a[3],great;
    input(a);
    greatest_integer(&great,a);
    output(great);

}