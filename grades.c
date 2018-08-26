#include <stdio.h>
void input(float *marks);
void grades(float marks,char *grade[]);
void output(char *grade[]);
void main(){
    float marks;
    char *grade[3];
    input(&marks);
    grades(marks,grade);
    output(grade);
}
void input(float *marks){
    printf("Type the marks.");
    float mar;
    scanf("%f",&mar);
    *marks = mar;
}
void grades(float marks,char *grade[]){
    
    if (marks>95){
        *grade = "A1\0";
    }
    else if(marks>85){
        *grade = "A2\0";
    }
    else if(marks>75){
        *grade = "B1\0";
    }
    else if (marks>60){
        *grade = "B2\0";
    }
    else if(marks>45){
        *grade = "C1\0";
    }
    else if(marks>40){
        *grade = "C2\0";
    }
    else if(marks>35){
        *grade = "D1\0";
    }
    else if(marks>30){
        *grade = "D2\0";
    }
    else{
        *grade = "E1\0";
    }
}
void output(char *grade[]){
    printf("Your grade is %s",*grade);
}
