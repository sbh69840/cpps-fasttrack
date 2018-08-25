#include <stdio.h>
void bubble_sort(float a[],float length);
void input_length(float *length);
void input_array(float a[],float length);
void output(float a[]);
void main(){
    float length;
    input_length(&length);
    float a[length];
    input_array(a[],float length);
    bubble_sort(a[],float length);
    output(a[]);

}
void input_length(float *length){
    printf("Enter length of array");
    scanf("%f",&length);
}
void input_array(float a[],float length){
    printf("Enter the elements");
    int i;
    for(i=0;i<length;i++){
        scanf("%f",&a[i]);
    }
}
void bubble_sort(float a[],float length){
    int i,j;
    float tmp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                tmp=a[j];
                

            }
        }
    }
}