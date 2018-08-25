#include <stdio.h>
void bubble_sort(float a[],float length);
void input_length(int *length);
void input_array(float a[],float length);
void output(float a[],float length);
void main(){
    int length;
    input_length(&length);
    float a[length];
    input_array(a,length);
    bubble_sort(a,length);
    output(a,length);

}
void input_length(int *length){
    printf("Enter length of array");
    int len;
    scanf("%d",&len);
    *length = len;
}
void input_array(float a[],float length){
    printf("Enter the elements");
    int i;
    for(i=0;i<length;i++){
        printf("Enter the value for a[%d]",i);
        scanf("%f",&a[i]);
    }
}
void bubble_sort(float a[],float length){
    int i,j;
    float tmp;
    for(i=0;i<length-1;i++){
        for(j=0;j<length-i-1;j++){
            if (a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;

            }
        }
    }
}
void output(float a[],float length){
    int i;
    for(i=0;i<length;i++){
        printf("%f \n",a[i]);
    }
}