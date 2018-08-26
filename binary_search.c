#include <stdio.h>
void input_length(int *length);
void input_array(float a[],int length);
void input_search_ele(float *search);
void binary_search(float a[],float length,int *index,float search);
void output(int index);

void main(){
    int length,index;
    input_length(&length);
    float a[length],search;
    input_array(a,length);
    input_search_ele(&search);
    binary_search(a,length,&index,search);
    output(index);
}

void input_length(int *length){
    int len;
    printf("Enter the length of array");
    scanf("%d",&len);
    *length = len;
}
void input_array(float a[],int length){
    int i;
    for(i=0;i<length;i++){
        printf("Enter the value of a[%d]",i);
        scanf("%f",&a[i]);
    }

}
void input_search_ele(float *search){
    float s;
    printf("Enter the value to search");
    scanf("%f",&s);
    *search = s;
}
void binary_search(float a[],float length,int *index,float search){
    int first_index,last_index,mid_index;
    first_index=0;
    last_index=length-1;
    mid_index = (first_index+last_index)/2;
    while(first_index<=last_index){
        if(a[mid_index]==search){
            *index = mid_index+1;
            break;
        }
        else if(a[mid_index]<search){
            first_index = mid_index+1;
        }
        else{
            last_index = mid_index-1;
        }
        mid_index = (first_index+last_index)/2;
    }
    if(first_index>last_index){
        *index = -1;
    }
}
void output(int index){
    if(index==-1){
        printf("Your key element was not found in the given array");
    }
    else{
        printf("The given element is located at %dth position.",index);
    }
}