#include <stdio.h>
#include <stdlib.h>
float * input();
void main(){
    float *p;
    p = input();
    int loop;
    for(loop=0;loop<3;loop++)
        printf("%f ",p[loop]);


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