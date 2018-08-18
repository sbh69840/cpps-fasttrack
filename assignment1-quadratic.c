#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float * input();
float * compute();
void output();
void main(){
    float *p;
    p = input();
    /*int loop;
    for(loop=0;loop<3;loop++)
        printf("%f ",p[loop]);*/
    float *c;
    c = compute(p);
    /*if (c==NULL){
        printf("The function doesn't have root.");
    }else{
        int loop1;
        for(loop1=0;loop1<2;loop1++)
            printf("%f ",c[loop1]);

    }*/
    output(c);
    



}
/*1)To return a array we use asterisk 
  2)Since it is not possible to return local address because once 
    we come out of the function the local address is not used anymore 
    therefore it is important to import stdlib and call malloc to create space 
    so that , that particular memory address is returned.
  */
float * input(){
    float *nums = malloc(sizeof(float)*3);
    printf("Type the values for a,b,c and press enter after each number.");
    scanf("%f %f %f",&nums[0],&nums[1],&nums[2]);
    return nums;
}
/*1)To return an array we use asterisk 
  2)Since it is not possible to return local address because once 
    we come out of the function the local address is not used anymore 
    therefore it is important to import stdlib and call malloc to create space 
    so that , that particular memory address is returned.
  3)I will first check if the function has roots and then return root if it has or else return NULL
  4)For square root (sqrt) function I have used math.h header file.
  */
float * compute(float *arr){
    float a,b,c;
    a=arr[0];
    b = arr[1];
    c = arr[2];
    float x_plus;
    float x_minus;
    float *results = malloc(sizeof(float)*3);
    float d = (b*b)-4*a*c;
    if (d<0){
        return NULL;
    }
    else{
        x_plus = (-b + sqrt(d))/(2*a);
        x_minus = (-b - sqrt(d))/(2*a);
        results[0]=x_plus;
        results[1]=x_minus;

    }
    return results;
    

}
/*1)To return a array we use asterisk 
  2)Printf is used fromm stdio.h header file to print on the terminal.
  */
void output(float *a){
    if (a==NULL){
        printf("The given quadratic equation has no roots.");
    }
    else{
        printf("The two roots are %f %f",a[0],a[1]);
    }
}